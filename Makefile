PORTNAME=	codelite
DISTVERSION=	17.0.0
CATEGORIES=	editors devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open Source IDE for C/C++
WWW=		https://codelite.org/

LICENSE=	GPLv2+

RUN_DEPENDS=	xterm:x11/xterm
LIB_DEPENDS+=	libhunspell-1.7.so:textproc/hunspell libiconv.so:converters/libiconv

#BROKEN_armv6=		fails to configure: has leading or trailing whitespace.  This is now an error according to policy CMP0004

USE_GITHUB=	yes
GH_ACCOUNT=	eranif
GH_TUPLE=	eranif:ctags:p6.0.20230108.0:ctags/ctags \
		eranif:dbgd:f8f7afa:wxdap/wxdap
#		eranif:wx-config-msys2:fe65daf:wxconfig/wx-config-msys2

USES=		cmake:noninja compiler:c++20-lang dos2unix gettext gnome pathfix \
		pkgconfig shebangfix sqlite desktop-file-utils
#USE_GCC=	13
USE_GNOME+=	cairo gtk20
DOS2UNIX_GLOB=	*.cpp *.txt
#SHEBANG_FILES=	Runtime/codelite_xterm
bash_CMD=	/bin/sh
USE_WX=		3.2
WX_COMPS=	wx
CMAKE_ARGS=	-DPREFIX:STRING="${PREFIX}" \
		-DCMAKE_INSTALL_PREFIX=${PREFIX} \
		-G "Unix Makefiles" \
		-DCMAKE_BUILD_TYPE=Release \
		-DIS_FREEBSD:STRING=1 \
		-DENABLE_LLDB:STRING=1 -DENABLE_CLANG:STRING=1 \
		-DCL_WX_CONFIG:STRING="${WX_CONFIG:T}" \
		-DwxWidgets_wxrc_EXECUTABLE=${WXRC_CMD} \
		-DWITH_WX_CONFIG=${WX_CONFIG} \
		-DCOPY_WX_LIBS=1 \
		-DCMAKE_CXX_STANDARD=20
CFLAGS+=	-I${LOCALBASE}/include/harfbuzz -I${LOCALBASE}/include
USE_LDCONFIG=	${PREFIX}/lib/codelite
INSTALLS_ICONS=	yes

OPTIONS_DEFINE=		CSCOPE SFTP
OPTIONS_RADIO=		CLANG
OPTIONS_SUB=		yes

CSCOPE_DESC=		CScope integration
CSCOPE_RUN_DEPENDS=	cscope:devel/cscope
SFTP_DESC=		Secure FTP support via libssh
SFTP_LIB_DEPENDS=	libssh.so:security/libssh
SFTP_CMAKE_OFF=		-DENABLE_SFTP:STRING=0
SFTP_USES=		localbase

CLANG_DESC=		Clang code-completion

.for v in 40 50 60
OPTIONS_RADIO_CLANG+=	CLANG$v
CLANG$v_DESC=		Clang ${v:C/(.)(.)/\1.\2.x/}
CLANG$v_BUILD_DEPENDS=	llvm$v>0:devel/llvm$v
CLANG$v_RUN_DEPENDS=	llvm$v>0:devel/llvm$v

post-patch-CLANG$v-on:
	@${REINPLACE_CMD} -e \
		's|/usr/lib/llvm-.*/|${LOCALBASE}/llvm$v/|' \
		${WRKSRC}/cmake/Modules/FindLibClang.cmake \
		${WRKSRC}/cmake/Modules/FindLibLLDB.cmake
.endfor

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MCLANG*}
CMAKE_ARGS+=	-DENABLE_LLDB:STRING=1 -DENABLE_CLANG:STRING=1
.else
CMAKE_ARGS+=	-DENABLE_LLDB:STRING=0 -DENABLE_CLANG:STRING=0
.endif

unpost-patch:
#	Use the correct wx-config
	@${REINPLACE_CMD} -e \
		'/ IS_FREEBSD/s|^|#| ; \
		 / CL_WX_CONFIG/s|^|#| ; \
		 / -Wno-/s|^|#| ; \
		 / -O2/s|^|#| ; \
		 s|"-s"|""|' \
		${WRKSRC}/CMakeLists.txt
	@${REINPLACE_CMD} -e \
		's|"-lkvm"|"-lkvm -lutil"| ; \
		 s|share/man|man|' \
		${WRKSRC}/LiteEditor/CMakeLists.txt
	@${REINPLACE_CMD} -e \
		's|"-lutil"|"-lkvm -lutil"|' \
		${WRKSRC}/codelite_terminal/CMakeLists.txt
	@${REINPLACE_CMD} -e \
		'/ADDITIONAL_LIBRARIES/s|""|"-lexecinfo"|' \
		${WRKSRC}/sdk/codelite_cppcheck/CMakeLists.txt
	@${REINPLACE_CMD} -e \
		's|/bin/grep|/usr/bin/grep|' \
		${WRKSRC}/cmake/Modules/FindLibClang.cmake

post-patch:
	${REINPLACE_CMD} -e 's/-std=c++11/-std=c++20/g' ${WRKSRC}/CMakeLists.txt
	${REINPLACE_CMD} -e 's|<iconv.h>|"${LOCALBASE}/include/iconv.h"|g' ${WRKSRC}/ctags/main/mbcs.c
	${RM} ${WRKSRC}/CodeLite/MSYS2.cpp

.include <bsd.port.mk>

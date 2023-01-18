# WIP porting Codelite to FreeBSD

## Current failure
    [ 28%] Building CXX object CodeLite/CMakeFiles/libcodelite.dir/xor_string.cpp.o
    cd /wrkdirs/usr/ports/editors/codelite/work/.build/CodeLite && ccache /usr/local/libexec/ccache/c++ -DGTK_USE_NATIVEBOOK=1 -DINSTALL_DIR=\"/usr/local/share/codelite\" -DNDEBUG -DPLUGINS_DIR=\"/usr/local/lib/codelite\" -DUSE_SFTP=0 -DWXUSINGDLL -DWXUSINGDLL_WXSQLITE3 -DYY_NEVER_INTERACTIVE=1 -D_FILE_OFFSET_BITS=64 -D_THREAD_SAFE -D__WXGTK__ -Dlibcodelite_EXPORTS -DwxUSE_GUI=1 -I/usr/local/include/gtk-3.0 -I/usr/local/include/glib-2.0 -I/usr/local/lib/glib-2.0/include -I/usr/local/include -I/usr/local/include/pango-1.0 -I/usr/local/include/cairo -I/usr/local/include/gdk-pixbuf-2.0 -I/usr/local/include/atk-1.0 -I/wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/sdk/wxsqlite3/include -I/wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/sdk/codelite_indexer/network -I/wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/sdk/websocketpp -I/wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/sdk/asio-1.12.1 -I/wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite -I/wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/PCH -I/wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/Interfaces -I/usr/local/lib/wx/include/gtk3-unicode-3.2 -I/usr/local/include/wx-3.2 -O2 -pipe -I/usr/local/include/harfbuzz -I/usr/local/include -fstack-protector-strong -fno-strict-aliasing -Wno-deprecated-declarations -isystem /usr/include/harfbuzz -std=c++20 -O2 -pthread -fPIC -fPIC -o CMakeFiles/libcodelite.dir/xor_string.cpp.o -c /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/xor_string.cpp

    --- CodeLite/CMakeFiles/libcodelite.dir/tags_storage_sqlite3.cpp.o ---
    In file included from /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/tags_storage_sqlite3.cpp:25:
    In file included from /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/tags_storage_sqlite3.h:31:
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/istorage.h:47:5: error: unknown type name 'wxFileName'
        wxFileName m_fileName;
        ^
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/istorage.h:80:11: error: unknown type name 'wxFileName'
        const wxFileName& GetDatabaseFileName() const { return m_fileName; }
            ^
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/istorage.h:264:41: error: unknown type name 'wxFileName'
                                    const wxFileName& path = wxFileName()) = 0;
                                            ^
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/istorage.h:297:45: error: unknown type name 'wxFileName'
        virtual void GetScopesFromFileAsc(const wxFileName& fileName, std::vector<wxString>& scopes) = 0;
                                                ^
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/istorage.h:322:50: error: unknown type name 'wxFileName'
        virtual void GetTagsByFileScopeAndKind(const wxFileName& fileName, const wxString& scopeName,
                                                    ^
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/istorage.h:380:41: error: unknown type name 'wxFileName'
        virtual void DeleteByFileName(const wxFileName& path, const wxString& fileName, bool autoCommit = true) = 0;
                                            ^
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/istorage.h:387:48: error: unknown type name 'wxFileName'
        virtual void DeleteFromFilesByPrefix(const wxFileName& dbpath, const wxString& filePrefix) = 0;
                                                ^
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/istorage.h:400:43: error: unknown type name 'wxFileName'
        virtual void DeleteByFilePrefix(const wxFileName& dbpath, const wxString& filePrefix) = 0;
                                            ^
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/istorage.h:406:37: error: unknown type name 'wxFileName'
        virtual void OpenDatabase(const wxFileName& fileName) = 0;
                                        ^
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/istorage.h:264:60: error: use of undeclared identifier 'wxFileName'
                                    const wxFileName& path = wxFileName()) = 0;
                                                            ^
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/tags_storage_sqlite3.cpp:624:8: error: cannot initialize object parameter of type 'const ITagsStorage' with an expression of type 'TagsStorageSQLite'
        if(GetUseCache() && m_cache.Get(sql, tags)) {
        ^~~~~~~~~~~
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/tags_storage_sqlite3.cpp:652:8: error: cannot initialize object parameter of type 'const ITagsStorage' with an expression of type 'TagsStorageSQLite'
        if(GetUseCache()) {
        ^~~~~~~~~~~
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/tags_storage_sqlite3.cpp:659:8: error: cannot initialize object parameter of type 'const ITagsStorage' with an expression of type 'TagsStorageSQLite'
        if(GetUseCache() && m_cache.Get(sql, kinds, tags))
        ^~~~~~~~~~~
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/tags_storage_sqlite3.cpp:693:8: error: cannot initialize object parameter of type 'const ITagsStorage' with an expression of type 'TagsStorageSQLite'
        if(GetUseCache()) {
        ^~~~~~~~~~~
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/tags_storage_sqlite3.cpp:718:30: error: cannot initialize object parameter of type 'const ITagsStorage' with an expression of type 'TagsStorageSQLite'
        sql << wxT(" LIMIT ") << this->GetSingleSearchLimit();
                                ^~~~
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/tags_storage_sqlite3.cpp:729:97: error: cannot initialize object parameter of type 'const ITagsStorage' with an expression of type 'TagsStorageSQLite'
        sql << wxT("select * from tags where scope='") << scope << wxT("' ORDER BY NAME limit ") << GetSingleSearchLimit();
                                                                                                    ^~~~~~~~~~~~~~~~~~~~
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/tags_storage_sqlite3.cpp:783:81: error: cannot initialize object parameter of type 'const ITagsStorage' with an expression of type 'TagsStorageSQLite'
        sql << wxT("select * from tags where name='") << name << wxT("' LIMIT ") << GetSingleSearchLimit();
                                                                                    ^~~~~~~~~~~~~~~~~~~~
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/tags_storage_sqlite3.cpp:804:81: error: cannot initialize object parameter of type 'const ITagsStorage' with an expression of type 'TagsStorageSQLite'
        sql << wxT("select * from tags where path='") << path << wxT("' LIMIT ") << GetSingleSearchLimit();
                                                                                    ^~~~~~~~~~~~~~~~~~~~
    /wrkdirs/usr/ports/editors/codelite/work/codelite-17.0.0/CodeLite/tags_storage_sqlite3.cpp:919:8: error: cannot initialize object parameter of type 'const ITagsStorage' with an expression of type 'TagsStorageSQLite'
        if(GetUseCache()) {
        ^~~~~~~~~~~
    fatal error: too many errors emitted, stopping now [-ferror-limit=]
    20 errors generated.
    *** [CodeLite/CMakeFiles/libcodelite.dir/tags_storage_sqlite3.cpp.o] Error code 1

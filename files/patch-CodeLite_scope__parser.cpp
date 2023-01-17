--- CodeLite/scope_parser.cpp.orig	2023-01-15 20:51:17 UTC
+++ CodeLite/scope_parser.cpp
@@ -833,9 +833,9 @@ std::string get_scope_name(	const std::string &in,
 int
 yyparse()
 {
-    register int yym, yyn, yystate;
+    int yym, yyn, yystate;
 #if YYDEBUG
-    register char *yys;
+    char *yys;
     extern char *getenv();
 
     if (yys = getenv("YYDEBUG"))

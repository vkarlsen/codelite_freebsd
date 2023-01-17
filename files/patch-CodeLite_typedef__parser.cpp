--- CodeLite/typedef_parser.cpp.orig	2023-01-15 20:51:17 UTC
+++ CodeLite/typedef_parser.cpp
@@ -539,9 +539,9 @@ void get_typedefs(const std::string &in, clTypedefList
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

--- CodeLite/cpp_func_parser.cpp.orig	2023-01-15 20:51:17 UTC
+++ CodeLite/cpp_func_parser.cpp
@@ -623,9 +623,9 @@ void get_functions(const std::string &in, FunctionList
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

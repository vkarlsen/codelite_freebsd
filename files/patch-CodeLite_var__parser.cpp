--- CodeLite/var_parser.cpp.orig	2023-01-15 20:51:17 UTC
+++ CodeLite/var_parser.cpp
@@ -744,9 +744,9 @@ bool is_primitive_type(const std::string &in)
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

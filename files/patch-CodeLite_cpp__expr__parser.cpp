--- CodeLite/cpp_expr_parser.cpp.orig	2023-01-15 20:51:17 UTC
+++ CodeLite/cpp_expr_parser.cpp
@@ -529,9 +529,9 @@ ExpressionResult &parse_expression(const std::string &
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

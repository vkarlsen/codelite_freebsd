--- CodeLite/pp.cpp.orig	2023-01-15 20:51:17 UTC
+++ CodeLite/pp.cpp
@@ -304,9 +304,9 @@ YYSTYPE yyvs[YYSTACKSIZE];
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

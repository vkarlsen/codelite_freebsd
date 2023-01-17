--- CodeLite/PhpLexer.cpp.orig	2023-01-15 20:51:17 UTC
+++ CodeLite/PhpLexer.cpp
@@ -1199,9 +1199,9 @@ extern int phplex (yyscan_t yyscanner);
  */
 YY_DECL
 {
-	register yy_state_type yy_current_state;
-	register char *yy_cp, *yy_bp;
-	register int yy_act;
+	yy_state_type yy_current_state;
+	char *yy_cp, *yy_bp;
+	int yy_act;
     struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 
 	if ( !yyg->yy_init )
@@ -1246,7 +1246,7 @@ YY_DECL
 yy_match:
 		do
 			{
-			register YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)];
+			YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)];
 			if ( yy_accept[yy_current_state] )
 				{
 				yyg->yy_last_accepting_state = yy_current_state;
@@ -2241,9 +2241,9 @@ case YY_STATE_EOF(SINGLE_STRING):
 static int yy_get_next_buffer (yyscan_t yyscanner)
 {
     struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
-	register char *dest = YY_CURRENT_BUFFER_LVALUE->yy_ch_buf;
-	register char *source = yyg->yytext_ptr;
-	register int number_to_move, i;
+	char *dest = YY_CURRENT_BUFFER_LVALUE->yy_ch_buf;
+	char *source = yyg->yytext_ptr;
+	int number_to_move, i;
 	int ret_val;
 
 	if ( yyg->yy_c_buf_p > &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[yyg->yy_n_chars + 1] )
@@ -2375,15 +2375,15 @@ static int yy_get_next_buffer (yyscan_t yyscanner)
 
     static yy_state_type yy_get_previous_state (yyscan_t yyscanner)
 {
-	register yy_state_type yy_current_state;
-	register char *yy_cp;
+	yy_state_type yy_current_state;
+	char *yy_cp;
     struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 
 	yy_current_state = yyg->yy_start;
 
 	for ( yy_cp = yyg->yytext_ptr + YY_MORE_ADJ; yy_cp < yyg->yy_c_buf_p; ++yy_cp )
 		{
-		register YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
+		YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
 		if ( yy_accept[yy_current_state] )
 			{
 			yyg->yy_last_accepting_state = yy_current_state;
@@ -2408,11 +2408,11 @@ static int yy_get_next_buffer (yyscan_t yyscanner)
  */
     static yy_state_type yy_try_NUL_trans  (yy_state_type yy_current_state , yyscan_t yyscanner)
 {
-	register int yy_is_jam;
+	int yy_is_jam;
     struct yyguts_t * yyg = (struct yyguts_t*)yyscanner; /* This var may be unused depending upon options. */
-	register char *yy_cp = yyg->yy_c_buf_p;
+	char *yy_cp = yyg->yy_c_buf_p;
 
-	register YY_CHAR yy_c = 1;
+	YY_CHAR yy_c = 1;
 	if ( yy_accept[yy_current_state] )
 		{
 		yyg->yy_last_accepting_state = yy_current_state;
@@ -2430,9 +2430,9 @@ static int yy_get_next_buffer (yyscan_t yyscanner)
 	return yy_is_jam ? 0 : yy_current_state;
 }
 
-    static void yyunput (int c, register char * yy_bp , yyscan_t yyscanner)
+    static void yyunput (int c, char * yy_bp , yyscan_t yyscanner)
 {
-	register char *yy_cp;
+	char *yy_cp;
     struct yyguts_t * yyg = (struct yyguts_t*)yyscanner;
 
     yy_cp = yyg->yy_c_buf_p;
@@ -2443,10 +2443,10 @@ static int yy_get_next_buffer (yyscan_t yyscanner)
 	if ( yy_cp < YY_CURRENT_BUFFER_LVALUE->yy_ch_buf + 2 )
 		{ /* need to shift things up to make room */
 		/* +2 for EOB chars. */
-		register int number_to_move = yyg->yy_n_chars + 2;
-		register char *dest = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[
+		int number_to_move = yyg->yy_n_chars + 2;
+		char *dest = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[
 					YY_CURRENT_BUFFER_LVALUE->yy_buf_size + 2];
-		register char *source =
+		char *source =
 				&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[number_to_move];
 
 		while ( source > YY_CURRENT_BUFFER_LVALUE->yy_ch_buf )
@@ -3223,7 +3223,7 @@ int phplex_destroy  (yyscan_t yyscanner)
 #ifndef yytext_ptr
 static void yy_flex_strncpy (char* s1, yyconst char * s2, int n , yyscan_t yyscanner)
 {
-	register int i;
+	int i;
 	for ( i = 0; i < n; ++i )
 		s1[i] = s2[i];
 }
@@ -3232,7 +3232,7 @@ static void yy_flex_strncpy (char* s1, yyconst char * 
 #ifdef YY_NEED_STRLEN
 static int yy_flex_strlen (yyconst char * s , yyscan_t yyscanner)
 {
-	register int n;
+	int n;
 	for ( n = 0; s[n]; ++n )
 		;
 

--- CodeLite/comment_parser.cpp.orig	2023-01-15 20:51:17 UTC
+++ CodeLite/comment_parser.cpp
@@ -604,9 +604,9 @@ YY_MALLOC_DECL
 
 YY_DECL
 	{
-	register yy_state_type yy_current_state;
-	register char *yy_cp, *yy_bp;
-	register int yy_act;
+	yy_state_type yy_current_state;
+	char *yy_cp, *yy_bp;
+	int yy_act;
 
 
 
@@ -653,7 +653,7 @@ YY_DECL
 yy_match:
 		do
 			{
-			register YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)];
+			YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)];
 			while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
 				{
 				yy_current_state = (int) yy_def[yy_current_state];
@@ -992,9 +992,9 @@ ECHO;
 
 static int yy_get_next_buffer()
 	{
-	register char *dest = yy_current_buffer->yy_ch_buf;
-	register char *source = yytext_ptr;
-	register int number_to_move, i;
+	char *dest = yy_current_buffer->yy_ch_buf;
+	char *source = yytext_ptr;
+	int number_to_move, i;
 	int ret_val;
 
 	if ( yy_c_buf_p > &yy_current_buffer->yy_ch_buf[yy_n_chars + 1] )
@@ -1124,8 +1124,8 @@ static int yy_get_next_buffer()
 
 static yy_state_type yy_get_previous_state()
 	{
-	register yy_state_type yy_current_state;
-	register char *yy_cp;
+	yy_state_type yy_current_state;
+	char *yy_cp;
 
 	yy_current_state = yy_start;
 	yy_state_ptr = yy_state_buf;
@@ -1133,7 +1133,7 @@ static yy_state_type yy_get_previous_state()
 
 	for ( yy_cp = yytext_ptr + YY_MORE_ADJ; yy_cp < yy_c_buf_p; ++yy_cp )
 		{
-		register YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
+		YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
 		while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
 			{
 			yy_current_state = (int) yy_def[yy_current_state];
@@ -1161,9 +1161,9 @@ static yy_state_type yy_try_NUL_trans( yy_current_stat
 yy_state_type yy_current_state;
 #endif
 	{
-	register int yy_is_jam;
+	int yy_is_jam;
 
-	register YY_CHAR yy_c = 1;
+	YY_CHAR yy_c = 1;
 	while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
 		{
 		yy_current_state = (int) yy_def[yy_current_state];
@@ -1181,14 +1181,14 @@ yy_state_type yy_current_state;
 
 #ifndef YY_NO_UNPUT
 #ifdef YY_USE_PROTOS
-static void yyunput( int c, register char *yy_bp )
+static void yyunput( int c, char *yy_bp )
 #else
 static void yyunput( c, yy_bp )
 int c;
-register char *yy_bp;
+char *yy_bp;
 #endif
 	{
-	register char *yy_cp = yy_c_buf_p;
+	char *yy_cp = yy_c_buf_p;
 
 	/* undo effects of setting up yytext */
 	*yy_cp = yy_hold_char;
@@ -1196,10 +1196,10 @@ register char *yy_bp;
 	if ( yy_cp < yy_current_buffer->yy_ch_buf + 2 )
 		{ /* need to shift things up to make room */
 		/* +2 for EOB chars. */
-		register int number_to_move = yy_n_chars + 2;
-		register char *dest = &yy_current_buffer->yy_ch_buf[
+		int number_to_move = yy_n_chars + 2;
+		char *dest = &yy_current_buffer->yy_ch_buf[
 					yy_current_buffer->yy_buf_size + 2];
-		register char *source =
+		char *source =
 				&yy_current_buffer->yy_ch_buf[number_to_move];
 
 		while ( source > yy_current_buffer->yy_ch_buf )
@@ -1664,7 +1664,7 @@ yyconst char *s2;
 int n;
 #endif
 	{
-	register int i;
+	int i;
 	for ( i = 0; i < n; ++i )
 		s1[i] = s2[i];
 	}
@@ -1678,7 +1678,7 @@ static int yy_flex_strlen( s )
 yyconst char *s;
 #endif
 	{
-	register int n;
+	int n;
 	for ( n = 0; s[n]; ++n )
 		;
 

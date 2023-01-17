--- CodeLite/lex.yy.cpp.orig	2023-01-15 20:51:17 UTC
+++ CodeLite/lex.yy.cpp
@@ -970,9 +970,9 @@ YY_MALLOC_DECL
 
 YY_DECL
 {
-    register yy_state_type yy_current_state;
-    register char *yy_cp, *yy_bp;
-    register int yy_act;
+    yy_state_type yy_current_state;
+    char *yy_cp, *yy_bp;
+    int yy_act;
 
 
 
@@ -1020,7 +1020,7 @@ YY_DECL
     yy_match:
     do
     {
-	    register YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)];
+	    YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)];
 		    while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
 		    {
 			    yy_current_state = (int) yy_def[yy_current_state];
@@ -1071,7 +1071,7 @@ YY_DECL
 		    YY_RULE_SETUP
 		    {
 		        /* Handle C-Style comment */
-		        register int c;
+		        int c;
 		        if (m_keepComments)
 		        m_comment += _U(yytext);
 		        for ( ; ; )
@@ -1114,7 +1114,7 @@ YY_DECL
 	    {
 	        /* Handle CPP style comment    */
 	        /* Constume everything until the newline */
-	        register int c;
+	        int c;
 	        if (m_keepComments)
 		        m_comment += _U(yytext);
 		        while ((c = yyinput()) != '\n' && c != EOF)
@@ -1969,9 +1969,9 @@ void yyFlexLexer::LexerOutput( const char* buf, int si
 
 int yyFlexLexer::yy_get_next_buffer()
 {
-	register char *dest = yy_current_buffer->yy_ch_buf;
-	register char *source = yytext_ptr;
-	register int number_to_move, i;
+	char *dest = yy_current_buffer->yy_ch_buf;
+	char *source = yytext_ptr;
+	int number_to_move, i;
 	int ret_val;
 
 	if ( yy_c_buf_p > &yy_current_buffer->yy_ch_buf[yy_n_chars + 1] )
@@ -2102,8 +2102,8 @@ int yyFlexLexer::yy_get_next_buffer()
 
 yy_state_type yyFlexLexer::yy_get_previous_state()
 {
-	register yy_state_type yy_current_state;
-	register char *yy_cp;
+	yy_state_type yy_current_state;
+	char *yy_cp;
 
 	yy_current_state = yy_start;
 	yy_state_ptr = yy_state_buf;
@@ -2111,7 +2111,7 @@ yy_state_type yyFlexLexer::yy_get_previous_state()
 
 	for ( yy_cp = yytext_ptr + YY_MORE_ADJ; yy_cp < yy_c_buf_p; ++yy_cp )
 	{
-		register YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
+		YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
 		while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
 		{
 			yy_current_state = (int) yy_def[yy_current_state];
@@ -2134,9 +2134,9 @@ yy_state_type yyFlexLexer::yy_get_previous_state()
 
 yy_state_type yyFlexLexer::yy_try_NUL_trans( yy_state_type yy_current_state )
 {
-	register int yy_is_jam;
+	int yy_is_jam;
 
-	register YY_CHAR yy_c = 1;
+	YY_CHAR yy_c = 1;
 	while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
 	{
 		yy_current_state = (int) yy_def[yy_current_state];
@@ -2152,9 +2152,9 @@ yy_state_type yyFlexLexer::yy_try_NUL_trans( yy_state_
 }
 
 
-void yyFlexLexer::yyunput( int c, register char* yy_bp )
+void yyFlexLexer::yyunput( int c, char* yy_bp )
 {
-	register char *yy_cp = yy_c_buf_p;
+	char *yy_cp = yy_c_buf_p;
 
 	/* undo effects of setting up yytext */
 	*yy_cp = yy_hold_char;
@@ -2162,10 +2162,10 @@ void yyFlexLexer::yyunput( int c, register char* yy_bp
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
@@ -2486,7 +2486,7 @@ int n;
 #endif
 
 {
-	register int i;
+	int i;
 	for ( i = 0; i < n; ++i )
 		s1[i] = s2[i];
 }
@@ -2501,7 +2501,7 @@ yyconst char *s;
 #endif
 
 {
-	register int n;
+	int n;
 	for ( n = 0; s[n]; ++n )
 		;
 

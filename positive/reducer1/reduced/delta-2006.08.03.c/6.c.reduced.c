struct yy_buffer_state {
  char;
  char *yy_buf_pos;
};
int *yy_buffer_stack;
static yy_c_buf_p, yylex_yy_amount_of_matched_text, yy_scan_bytes_n;
char *yylex_yy_cp;
void *yy_create_buffer_tmp, *yyensure_buffer_stack_tmp, *yyalloc_tmp;
void *yyalloc();
yyensure_buffer_stack() {
  yyensure_buffer_stack_tmp = yyalloc(sizeof(struct yy_buffer_state *));
  yy_buffer_stack = yyensure_buffer_stack_tmp;
}

yy_scan_bytes() { yyalloc(yy_scan_bytes_n); }

void *yyalloc(p1) {
  yyalloc_tmp = malloc(p1);
  return yyalloc_tmp;
}

main() {
  yyensure_buffer_stack();
  yy_create_buffer_tmp = yyalloc(sizeof(struct yy_buffer_state));
  yyalloc();
  *yy_buffer_stack = yy_create_buffer_tmp;
  yylex_yy_amount_of_matched_text = yylex_yy_cp - yylex_yy_cp;
  yy_c_buf_p = yylex_yy_cp + yylex_yy_amount_of_matched_text;
  yylex_yy_cp = yy_c_buf_p = *yy_buffer_stack;
  airac_observe(yy_c_buf_p, 0);
}

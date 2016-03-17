struct yy_buffer_state {
  int;
  char *yy_ch_buf;
  char *yy_buf_pos;
  int yy_buf_size;
  int;
  int;
  int;
  int;
  int;
  int;
};
char yy_c_buf_p;
char *yylex_yy_cp;
int yylex_yy_amount_of_matched_text, yylex_tmp___0;
struct yy_buffer_state *yy_create_buffer_b;
void *yy_create_buffer_tmp, *yy_flex_alloc_tmp;
void *yy_flex_alloc();
process_value(p1) {
  char *vp = p1;
  airac_observe(vp, 0);
}

yy_scan_bytes() { yy_flex_alloc(2); }

void *yy_flex_alloc(p1) {
  yy_flex_alloc_tmp = malloc(p1);
  return yy_flex_alloc_tmp;
}

main() {
  yy_create_buffer_tmp = yy_flex_alloc(sizeof(struct yy_buffer_state));
  yy_create_buffer_b = yy_create_buffer_tmp;
  yy_create_buffer_b->yy_buf_size = 84;
  yy_flex_alloc(yy_create_buffer_b->yy_buf_size);
  while (1) {
  yy_match:
    process_value(yylex_yy_cp);
    yylex_yy_amount_of_matched_text = yylex_yy_cp - yylex_yy_cp;
    if (yylex_tmp___0)
      goto case_2___0;
    yy_c_buf_p = yylex_yy_cp + yylex_yy_amount_of_matched_text;
    yylex_yy_cp = yy_c_buf_p;
    goto yy_match;
  case_2___0:
    yylex_yy_cp = yy_create_buffer_tmp;
  }
}

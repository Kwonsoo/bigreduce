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
int value_match_tmp;
char yylex_yy_cp;
struct yy_buffer_state *yy_create_buffer_b;
void *yy_create_buffer_tmp, *yy_flex_alloc_tmp;
void *yy_flex_alloc();
process_value(p1) {
  char *vp;
  int vn;
  vp = p1;
  while (1) {
    value_match_tmp = strcspn(vp, "");
    vn = value_match_tmp;
    airac_observe(vp, vn);
    vp += vn;
  }
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
    process_value(yylex_yy_cp);
    yylex_yy_cp = yy_create_buffer_tmp;
  }
}

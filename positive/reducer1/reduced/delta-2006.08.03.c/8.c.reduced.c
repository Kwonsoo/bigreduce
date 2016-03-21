struct yy_buffer_state {
  char *yy_ch_buf;
  unsigned;
};
void *a, *d;
int c;
void *yyalloc();
yylex() {
  yyalloc(sizeof(struct yy_buffer_state *));
  yy_create_buffer();
}

yy_create_buffer() {
  int b;
  a = yyalloc(sizeof(struct yy_buffer_state));
  b = a;
  airac_observe(b, 0);
}

yy_scan_bytes() { yyalloc(c); }

void *yyalloc(p1) {
  d = malloc(p1);
  return d;
}

main() { yylex(); }

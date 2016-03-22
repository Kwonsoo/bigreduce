typedef struct yy_buffer_state *YY_BUFFER_STATE;
struct yy_buffer_state {
  long yy_buf_size;
};
void *a, *d;
long c;
void *yyalloc();
yyensure_buffer_stack() { yyalloc(sizeof(struct yy_buffer_state)); }

yy_scan_bytes() { yyalloc(c); }

void *yyalloc(p1) {
  d = malloc(p1);
  return d;
}

main() {
  YY_BUFFER_STATE b;
  a = yyalloc(sizeof(struct yy_buffer_state));
  b = a;
  b->yy_buf_size = 84;
  airac_observe(b, 0);
  yyalloc(b->yy_buf_size);
}

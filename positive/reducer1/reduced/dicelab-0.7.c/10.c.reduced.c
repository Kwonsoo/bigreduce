void *a, *d;
long c;
struct yy_buffer_state {
  char;
  long;
} yyparse() {
  yyensure_buffer_stack();
  yy_create_buffer();
}

void *yyalloc();
yy_create_buffer() {
  int b;
  a = yyalloc(sizeof(struct yy_buffer_state));
  b = a;
  airac_observe(b, 0);
}

yyensure_buffer_stack() { yyalloc(sizeof(struct yy_buffer_state *)); }

yy_scan_bytes() { yyalloc(c); }

void *yyalloc(p1) {
  d = malloc(p1);
  return d;
}

main() { yyparse(); }

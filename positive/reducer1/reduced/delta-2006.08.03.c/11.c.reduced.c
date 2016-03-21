struct yy_buffer_state {
  unsigned;
  int;
};
int a;
void *c;
void *yyalloc();
yyensure_buffer_stack() { yyalloc(sizeof(struct yy_buffer_state)); }

yy_scan_bytes() { yyalloc(a); }

void *yyalloc(p1) {
  c = malloc(p1);
  return c;
}

main() {
  yyensure_buffer_stack();
  int b = yyalloc();
  yyalloc(84);
  airac_observe(b, 0);
}

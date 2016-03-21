struct yy_buffer_state {
  unsigned;
  int;
  int;
};
long yy_buffer_stack_top;
int **yy_buffer_stack;
void *yyensure_buffer_stack_tmp, *yyalloc_tmp;
int yy_scan_bytes_n;
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
  yyalloc(sizeof(struct yy_buffer_state));
  yyalloc();
  yy_buffer_stack_top++;
  yy_buffer_stack_top--;
  airac_observe(yy_buffer_stack, yy_buffer_stack_top);
}

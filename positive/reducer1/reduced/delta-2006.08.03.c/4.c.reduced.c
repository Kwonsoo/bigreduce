long yy_buffer_stack_top;
int **yy_buffer_stack;
void *yyensure_buffer_stack_tmp, *yyalloc_tmp;
int yy_scan_bytes_n, yy_scan_bytes_len;
void *yyalloc();
yyensure_buffer_stack() {
  int num_to_alloc = 1;
  yyensure_buffer_stack_tmp =
      yyalloc(num_to_alloc * sizeof(struct yy_buffer_state *));
  yy_buffer_stack = yyensure_buffer_stack_tmp;
  num_to_alloc = 8;
  yyrealloc();
}

yy_scan_bytes() {
  yy_scan_bytes_n = yy_scan_bytes_len + 2;
  yyalloc(yy_scan_bytes_n);
}

void *yyalloc(p1) {
  yyalloc_tmp = malloc(p1);
  return yyalloc_tmp;
}

yyrealloc() {
  airac_observe(yy_buffer_stack, yy_buffer_stack_top);
  yyensure_buffer_stack();
  yy_buffer_stack_top++;
  yy_buffer_stack_top--;
}

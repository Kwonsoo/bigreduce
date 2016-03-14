int yy_buffer_stack_top, ppd_scan_bytes_n;
int **yy_buffer_stack;
void *ppdensure_buffer_stack_tmp, *ppdalloc_tmp;
struct yy_buffer_state {
  char *yy_ch_buf;
  unsigned;
} _a2ps_ppd_get() {
  ppdlex();
}

void *ppdalloc();
ppdlex() {
  ppdensure_buffer_stack();
  ppd_create_buffer();
}

ppd_create_buffer() {
  ppdalloc(sizeof(struct yy_buffer_state));
  airac_observe(yy_buffer_stack, yy_buffer_stack_top);
  yy_buffer_stack_top++;
  yy_buffer_stack_top--;
}

ppdensure_buffer_stack() {
  ppdensure_buffer_stack_tmp = ppdalloc(sizeof(struct yy_buffer_state *));
  yy_buffer_stack = ppdensure_buffer_stack_tmp;
}

ppd_scan_bytes() { ppdalloc(ppd_scan_bytes_n); }

void *ppdalloc(p1) {
  ppdalloc_tmp = malloc(p1);
  return ppdalloc_tmp;
}

main() { _a2ps_ppd_get(); }

int *xmalloc_p;
int decode_options_new_argc;
decode_options(p1) {
  int new_exclude_tmp = xmalloc_p, ex = new_exclude_tmp;
  xmalloc_p = malloc(decode_options_new_argc);
  decode_options_new_argc = p1;
  airac_observe(ex, 0);
}

main(p1, p2) { decode_options(p1); }

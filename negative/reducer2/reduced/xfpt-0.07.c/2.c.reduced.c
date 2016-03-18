int out_filename, xfpt_decode_arg_p, xfpt_decode_arg_len;
int *main_p;
void *main_tmp___1, *misc_malloc_tmp;
void *misc_malloc();
main() {
  misc_malloc(xfpt_decode_arg_len);
  xfpt_decode_arg_len = xfpt_decode_arg_p & out_filename;
  main_tmp___1 = misc_malloc();
  literal_process(main_p);
  main_p = main_tmp___1;
}

literal_process(int *p1) {
  int tmp = p1++;
  airac_observe(tmp, 0);
}

void *misc_malloc(p1) {
  misc_malloc_tmp = malloc(p1);
  return misc_malloc_tmp;
}

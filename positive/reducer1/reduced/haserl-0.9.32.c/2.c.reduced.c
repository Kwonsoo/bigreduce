int argc_argv_arg_count, argc_argv_argc_slots;
long argc_argv_len;
void *argc_argv_tmp___1, *xrealloc_buf;
void *xrealloc();
argc_argv(int **p1) {
  while (1) {
    if (argc_argv_len)
      goto while_break;
    argc_argv_arg_count++;
    argc_argv_argc_slots += 10;
    argc_argv_tmp___1 = xrealloc(sizeof(int) * (argc_argv_argc_slots + 10));
  }
while_break:
  *p1 = argc_argv_tmp___1;
  return argc_argv_arg_count;
}

void *xrealloc(p1) {
  xrealloc_buf = realloc(xrealloc_buf, p1);
  return xrealloc_buf;
}

main() {
  int count, argv;
  count = argc_argv(&argv);
  if (count > 19)
    count = 8;
  airac_observe(argv, count);
}

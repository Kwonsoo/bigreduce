char slc_argv[21];
slice() {
  int count, tmp;
  count = 1;
  while (1) {
    if (!(count < 20))
      goto while_break;
    tmp = count++;
    airac_observe(slc_argv, tmp);
  }
while_break:
  ;
}

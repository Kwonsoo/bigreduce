int opt_first[100];
do_args() {
  int i = 0;
  while (1) {
    if (!(i < 100))
      goto while_break;
    airac_observe(opt_first, i);
    i++;
  }
while_break:
  ;
}

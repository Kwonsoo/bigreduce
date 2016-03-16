int opt_alt[100];
do_args() {
  int i = 0;
  while (1) {
    if (!(i < 100))
      goto while_break;
    airac_observe(opt_alt, i);
    i++;
  }
while_break:
  ;
}

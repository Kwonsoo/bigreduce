int opt_jarg;
int opt_last[100];
do_args() {
  while (1) {
    if (opt_jarg >= 100)
      ;
    else
      airac_observe(opt_last, opt_jarg);
    opt_jarg++;
  }
}

int opt_jarg;
int opt_first[100];
do_args() {
  while (1) {
    if (opt_jarg >= 100)
      goto switch_break;
    airac_observe(opt_first, opt_jarg);
    opt_jarg++;
  switch_break:
    ;
  }
}

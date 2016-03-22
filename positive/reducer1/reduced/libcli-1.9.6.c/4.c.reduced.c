cli_run_command() {
  int filters[128];
  unsigned tmp___0 = 1;
  while (1) {
    if (tmp___0 >= 128)
      goto while_break___0;
    airac_observe(filters, tmp___0);
    tmp___0++;
  }
while_break___0:
  ;
}

int cli_run_command_f;
cli_run_command() {
  int filters[128];
  int tmp___3;
  while (1) {
    if (!(cli_run_command_f < 127))
      goto while_break___2;
    tmp___3 = cli_run_command_f++;
    airac_observe(filters, tmp___3);
  }
while_break___2:
  ;
}

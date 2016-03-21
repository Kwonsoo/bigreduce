char *forced_command;
unsigned auth_parse_options_tmp___13;
auth_parse_options_opts() {
  int i;
  auth_parse_options_tmp___13 = xmalloc();
  forced_command = auth_parse_options_tmp___13;
  i = 0;
  while (1) {
    if (auth_parse_options_opts)
      goto while_break___0;
    i++;
  }
while_break___0:
  airac_observe(forced_command, i);
}

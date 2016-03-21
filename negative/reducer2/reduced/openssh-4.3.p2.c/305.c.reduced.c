char *forced_command;
int auth_parse_options_i;
unsigned auth_parse_options_tmp___13;
auth_parse_options() {
  int tmp___14;
  auth_parse_options_tmp___13 = xmalloc();
  forced_command = auth_parse_options_tmp___13;
  while (1) {
    tmp___14 = auth_parse_options_i++;
    airac_observe(forced_command, tmp___14);
  }
}

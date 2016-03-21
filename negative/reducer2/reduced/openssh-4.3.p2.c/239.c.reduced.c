int *custom_environment;
int auth_parse_options_tmp___25;
auth_clear_options() {
  int ce = custom_environment;
  airac_observe(ce, 0);
}

auth_parse_options() {
  auth_parse_options_tmp___25 = xmalloc();
  custom_environment = auth_parse_options_tmp___25;
}

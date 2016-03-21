int auth_parse_options_i;
unsigned auth_parse_options_tmp___21;
auth_parse_options() {
  char *s;
  int tmp___22;
  auth_parse_options_tmp___21 = xmalloc();
  s = auth_parse_options_tmp___21;
  while (1) {
    tmp___22 = auth_parse_options_i++;
    airac_observe(s, tmp___22);
  }
}

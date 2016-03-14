check_header_value() {
  char bin_string[33];
  int i = 0;
  while (1) {
    if (!(i < 32))
      goto while_break___1;
    airac_observe(bin_string, 31 - i);
    i++;
  }
while_break___1:
  ;
}

check_header_value() {
  char bin_string[33];
  unsigned tmp = 1;
  while (1) {
    if (tmp >= 33)
      goto while_break;
    airac_observe(bin_string, tmp);
    tmp++;
  }
while_break:
  ;
}

format_output_format_string() {
  char genre[40];
  unsigned tmp = 1;
  while (1) {
    if (tmp >= 40)
      goto while_break;
    airac_observe(genre, tmp);
    tmp++;
  }
while_break:
  ;
}

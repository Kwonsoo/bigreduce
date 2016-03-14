cfg_parse() {
  char option[200];
  unsigned tmp___0 = 1;
  while (1) {
    if (tmp___0 >= 200)
      goto while_break;
    airac_observe(option, tmp___0);
    tmp___0++;
  }
while_break:
  ;
}

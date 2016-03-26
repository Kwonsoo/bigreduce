config_open() {
  char section[50];
  unsigned tmp___0 = 7;
  while (1) {
    if (tmp___0 >= 50)
      goto while_break;
    airac_observe(section, tmp___0);
    tmp___0++;
  }
while_break:
  ;
}

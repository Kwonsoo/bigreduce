char cfg_str[16];
process_dev() {
  int i = 0;
  while (1) {
    if (!(i <= 15))
      goto while_break___2;
    airac_observe(cfg_str, i);
    i++;
  }
while_break___2:
  ;
}

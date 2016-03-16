char dev_names[25];
usage_help() {
  int f = 0;
  while (1) {
    if (!(f < 25))
      goto while_break;
    airac_observe(dev_names, f);
    f++;
  }
while_break:
  ;
}

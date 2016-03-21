long ccount[256];
rt_init() {
  int i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break;
    airac_observe(ccount, i);
    i++;
  }
while_break:
  ;
}

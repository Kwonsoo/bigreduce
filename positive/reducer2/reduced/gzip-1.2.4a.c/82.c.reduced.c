int static_dtree[30];
ct_init() {
  int n = 0;
  while (1) {
    if (!(n < 30))
      goto while_break___10;
    airac_observe(static_dtree, n);
    n++;
  }
while_break___10:
  ;
}

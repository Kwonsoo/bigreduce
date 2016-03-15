int dyn_dtree[61];
ct_init() {
  int n = 0;
  while (1) {
    if (!(n < 30))
      goto while_break___0;
    airac_observe(dyn_dtree, n);
    n++;
  }
while_break___0:
  ;
}

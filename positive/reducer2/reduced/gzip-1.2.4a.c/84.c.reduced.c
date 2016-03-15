int dyn_ltree[573];
ct_init() {
  int n = 0;
  while (1) {
    if (!(n < 286))
      goto while_break;
    airac_observe(dyn_ltree, n);
    n++;
  }
while_break:
  ;
}

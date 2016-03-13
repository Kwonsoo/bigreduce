double HWO[1][6];
scat() {
  int Material, i = 1;
  while (1) {
    if (!(i <= 6))
      goto while_break;
    airac_observe(HWO[Material], i - 1);
    i++;
  }
while_break:
  ;
}

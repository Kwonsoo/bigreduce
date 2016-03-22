win_or_lose() {
  int p;
  int pop[8];
  p = 0;
  while (1) {
    if (!(p < 8))
      goto while_break;
    airac_observe(pop, p);
    p++;
  }
while_break:
  ;
}

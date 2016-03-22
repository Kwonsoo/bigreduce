ShowInfo() {
  int mask;
  char buf___2[8];
  mask = 0;
  mask = 2;
  while (1) {
    if (!(mask < 8))
      goto while_break___1;
    airac_observe(buf___2, mask);
    mask++;
  }
while_break___1:
  ;
}

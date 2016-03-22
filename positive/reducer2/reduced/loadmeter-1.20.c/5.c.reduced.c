ShowInfo() {
  int mask;
  char buf___2[8];
  mask = 0;
  while (1) {
    if (!(mask < 7))
      goto while_break___0;
    airac_observe(buf___2, mask);
    mask++;
  }
while_break___0:
  ;
}

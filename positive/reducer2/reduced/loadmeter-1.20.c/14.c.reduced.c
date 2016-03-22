Meminfo() {
  char buf___2[7];
  int mask = 0;
  while (1) {
    if (!(mask < 6))
      goto while_break;
    airac_observe(buf___2, mask);
    mask++;
  }
while_break:
  ;
}

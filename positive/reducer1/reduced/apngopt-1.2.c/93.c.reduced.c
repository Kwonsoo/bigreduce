int col[256];
SaveAPNG_first() {
  unsigned i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break___60;
    airac_observe(col, i);
    i++;
  }
while_break___60:
  ;
}

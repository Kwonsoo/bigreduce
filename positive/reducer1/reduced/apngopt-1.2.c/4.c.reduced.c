int col[256];
SaveAPNG() {
  unsigned i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break;
    airac_observe(col, i);
    i++;
  }
while_break:
  ;
}

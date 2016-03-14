char inUse[256];
randomiseBlock() {
  int i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break;
    airac_observe(inUse, i);
    i++;
  }
while_break:
  ;
}

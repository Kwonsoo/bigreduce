recvDecodingTables() {
  int i;
  char inUse16[16];
  i = 0;
  while (1) {
    if (!(i < 16))
      goto while_break;
    airac_observe(inUse16, i);
    i++;
  }
while_break:
  ;
}

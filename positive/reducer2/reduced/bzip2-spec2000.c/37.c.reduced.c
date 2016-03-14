char inUse[256];
recvDecodingTables() {
  int i, j;
  i = 0;
  while (1) {
    if (!(i < 16))
      goto while_break___1;
    j = 0;
    while (1) {
      if (!(j < 16))
        goto while_break___2;
      airac_observe(inUse, i * 16 + j);
      j++;
    }
  while_break___2:
    i++;
  }
while_break___1:
  ;
}

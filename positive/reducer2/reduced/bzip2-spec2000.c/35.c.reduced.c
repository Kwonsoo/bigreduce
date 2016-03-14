char inUse[256];
recvDecodingTables() {
  int i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break___0;
    airac_observe(inUse, i);
    i++;
  }
while_break___0:
  ;
}

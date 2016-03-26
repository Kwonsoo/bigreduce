DumpMem() {
  int Column;
  char data[16];
  Column = 0;
  while (1) {
    if (!(Column < 16))
      goto while_break___0;
    airac_observe(data, Column);
    Column++;
  }
while_break___0:
  ;
}

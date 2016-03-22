int gFileDescr[32];
SerialPortOpenPortNamed() {
  int entryIndex = 0;
  while (1) {
    if (!(entryIndex < 32))
      goto while_break;
    airac_observe(gFileDescr, entryIndex);
    entryIndex++;
  }
while_break:
  ;
}

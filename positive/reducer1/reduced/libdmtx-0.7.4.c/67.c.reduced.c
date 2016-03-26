const dmtxPatternY[8];
dmtxRegionScanPixel() {
  int i = 0;
  while (1) {
    if (!(i < 8))
      goto while_break;
    airac_observe(dmtxPatternY, i);
    i++;
  }
while_break:
  ;
}

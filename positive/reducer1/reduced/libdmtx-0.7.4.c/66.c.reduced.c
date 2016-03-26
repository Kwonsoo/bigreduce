const dmtxPatternX[8];
dmtxRegionScanPixel() {
  int i = 0;
  while (1) {
    if (!(i < 8))
      goto while_break;
    airac_observe(dmtxPatternX, i);
    i++;
  }
while_break:
  ;
}

const dmtxPatternY[8];
dmtxRegionScanPixel() {
  int patternIdx = 0;
  while (1) {
    if (!(patternIdx < 8))
      goto while_break___0;
    airac_observe(dmtxPatternY, patternIdx);
    patternIdx++;
  }
while_break___0:
  ;
}

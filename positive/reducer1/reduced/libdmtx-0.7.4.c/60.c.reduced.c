dmtxRegionScanPixel() {
  int patternIdx;
  int colorPattern[8];
  patternIdx = 0;
  while (1) {
    if (!(patternIdx < 8))
      goto while_break___2;
    airac_observe(colorPattern, patternIdx);
    patternIdx++;
  }
while_break___2:
  ;
}

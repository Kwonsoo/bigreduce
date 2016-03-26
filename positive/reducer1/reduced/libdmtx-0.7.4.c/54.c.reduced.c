dmtxRegionScanPixel() {
  int i;
  double sampleX[5];
  i = 0;
  while (1) {
    if (!(i < 5))
      goto while_break;
    airac_observe(sampleX, i);
    i++;
  }
while_break:
  ;
}

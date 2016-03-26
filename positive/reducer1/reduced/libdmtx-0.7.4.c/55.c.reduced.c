dmtxRegionScanPixel() {
  int i;
  double sampleY[5];
  i = 0;
  while (1) {
    if (!(i < 5))
      goto while_break;
    airac_observe(sampleY, i);
    i++;
  }
while_break:
  ;
}

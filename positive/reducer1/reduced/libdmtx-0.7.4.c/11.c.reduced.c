int dmtxRegionScanPixel_i;
dmtxRegionScanPixel() {
  int strongIdx;
  int flowPlane[3];
  strongIdx = dmtxRegionScanPixel_i++;
  airac_observe(flowPlane, strongIdx);
}

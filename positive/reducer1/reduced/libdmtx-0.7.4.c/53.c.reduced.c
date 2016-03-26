int dmtxDecodeGetPixelValue_width;
dmtxDecodeGetPixelValue_dec() {
  int i;
  int rgb[3];
  dmtxDecodeGetPixelValue_width = dmtxDecodeGetProp();
  i = dmtxDecodeGetPixelValue_width = 0;
  while (1) {
    airac_observe(rgb, i);
    i++;
  }
}

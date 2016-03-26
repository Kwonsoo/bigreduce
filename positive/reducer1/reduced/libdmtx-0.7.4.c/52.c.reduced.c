int dmtxDecodeCreateDiagnostic_width;
dmtxDecodeCreateDiagnostic_dec() {
  int i;
  int rgb[3];
  dmtxDecodeCreateDiagnostic_width = dmtxDecodeGetProp();
  i = dmtxDecodeCreateDiagnostic_width = 0;
  while (1) {
    if (!(i < 3))
      ;
    else
      airac_observe(rgb, i);
    i++;
  }
}

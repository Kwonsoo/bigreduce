dmtxDecodeMatrixRegion() {
  int i;
  int c40Values[3];
  i = 0;
  while (1) {
    if (!(i < 3))
      ;
    else
      airac_observe(c40Values, i);
    i++;
  }
}

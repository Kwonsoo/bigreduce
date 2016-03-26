dmtxDecodeMatrixRegion() {
  int i;
  int c40Values[3];
  i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break___0;
    airac_observe(c40Values, i);
    i++;
  }
while_break___0:
  ;
}

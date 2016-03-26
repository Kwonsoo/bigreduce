dmtxDecodeMatrixRegion() {
  int lines[4];
  int i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break___0;
    airac_observe(lines, i);
    i++;
  }
while_break___0:
  ;
}

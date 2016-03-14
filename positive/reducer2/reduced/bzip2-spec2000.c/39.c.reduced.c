getAndMoveToFrontDecode() {
  char yy[256];
  int i = 0;
  while (1) {
    if (!(i <= 255))
      goto while_break___0;
    airac_observe(yy, i);
    i++;
  }
while_break___0:
  ;
}

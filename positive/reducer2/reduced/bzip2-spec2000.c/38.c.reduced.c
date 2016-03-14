int unzftab[256];
getAndMoveToFrontDecode() {
  int i = 0;
  while (1) {
    if (!(i <= 255))
      goto while_break;
    airac_observe(unzftab, i);
    i++;
  }
while_break:
  ;
}

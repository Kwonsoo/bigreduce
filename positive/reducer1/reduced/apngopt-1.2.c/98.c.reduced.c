SaveAPNG() {
  int i;
  char gray[256];
  i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break___68;
    airac_observe(gray, i);
    i++;
  }
while_break___68:
  ;
}

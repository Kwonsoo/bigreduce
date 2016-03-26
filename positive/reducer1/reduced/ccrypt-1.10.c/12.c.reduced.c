ccencrypt() {
  int lbuf[8];
  int i = 0;
  while (1) {
    if (!(i < 8))
      goto while_break___1;
    airac_observe(lbuf, i);
    i++;
  }
while_break___1:
  ;
}

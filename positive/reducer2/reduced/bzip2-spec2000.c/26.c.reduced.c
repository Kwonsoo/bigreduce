int nMTF, sendMTFValues_ge;
sendMTFValues() {
  int i;
  char inUse16[16];
  i = 0;
  while (1) {
    if (!(i < 16))
      goto while_break___22;
    airac_observe(inUse16, i);
    i++;
  }
while_break___22:
  sendMTFValues_ge = nMTF - 1;
  i = sendMTFValues_ge;
}

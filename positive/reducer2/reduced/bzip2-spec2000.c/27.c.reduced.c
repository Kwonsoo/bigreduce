char inUse[256];
int nMTF, sendMTFValues_ge;
sendMTFValues() {
  int i, j;
  i = 0;
  while (1) {
    if (!(i < 16))
      goto while_break___22;
    j = 0;
    while (1) {
      if (!(j < 16))
        goto while_break___23;
      airac_observe(inUse, i * 16 + j);
      j++;
    }
  while_break___23:
    i++;
  }
while_break___22:
  sendMTFValues_ge = nMTF - 1;
  i = sendMTFValues_ge;
}

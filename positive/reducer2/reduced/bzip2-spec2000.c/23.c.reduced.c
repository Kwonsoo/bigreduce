int nMTF, sendMTFValues_ge;
sendMTFValues() {
  int i;
  char pos[6];
  i = 0;
  while (1) {
    if (!(i < 6))
      goto while_break___17;
    airac_observe(pos, i);
    i++;
  }
while_break___17:
  sendMTFValues_ge = nMTF - 1;
  i = sendMTFValues_ge;
}

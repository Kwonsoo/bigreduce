char len[6];
sendMTFValues() {
  int t = 0;
  while (1) {
    if (!(t < 6))
      goto while_break___29;
    airac_observe(len, t);
    t++;
  }
while_break___29:
  ;
}

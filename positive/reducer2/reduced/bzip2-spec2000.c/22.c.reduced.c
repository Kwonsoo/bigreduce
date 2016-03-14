int rfreq[6];
sendMTFValues() {
  int t = 0;
  while (1) {
    if (!(t < 6))
      goto while_break___16;
    airac_observe(rfreq, t);
    t++;
  }
while_break___16:
  ;
}

sendMTFValues() {
  int t;
  int fave[6];
  t = 0;
  while (1) {
    if (!(t < 6))
      goto while_break___15;
    airac_observe(fave, t);
    t++;
  }
while_break___15:
  ;
}

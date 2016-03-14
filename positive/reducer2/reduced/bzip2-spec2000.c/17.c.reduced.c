sendMTFValues() {
  int t;
  int fave[6];
  while (1) {
    while (1) {
      if (!(t < 6))
        goto while_break___5;
      airac_observe(fave, t);
      t++;
    }
  while_break___5:
    t = 0;
  }
}

char len[6];
sendMTFValues() {
  int t = 0;
  while (1) {
    if (!(t < 6))
      while (1)
        ;
    airac_observe(len, t);
    t++;
  }
}

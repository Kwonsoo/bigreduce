int optind, margv;
init(char *p1) {
  int t;
  p1 += optind;
  margv = p1;
  t = 0;
  while (1) {
    airac_observe(margv, t);
    t++;
  }
}

main(p1, p2) { init(p2); }

static *selections;
value_match(p1) {
  char *ap = p1;
  airac_observe(ap, 0);
}

main(p1, p2) {
  selections = p2;
  value_match(*selections);
}

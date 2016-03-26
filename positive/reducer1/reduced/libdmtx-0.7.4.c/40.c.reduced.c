RsFindErrorLocatorPoly() {
  int i;
  int elp[70];
  i = 0;
  while (1) {
    if (!(i < 70))
      goto while_break;
    airac_observe(elp, i);
    i++;
  }
while_break:
  ;
}

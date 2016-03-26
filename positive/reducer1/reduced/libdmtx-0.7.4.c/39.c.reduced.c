RsFindErrorLocatorPoly() {
  int i;
  char elpStorage[70];
  i = 0;
  while (1) {
    if (!(i < 70))
      goto while_break;
    airac_observe(elpStorage, i);
    i++;
  }
while_break:
  ;
}

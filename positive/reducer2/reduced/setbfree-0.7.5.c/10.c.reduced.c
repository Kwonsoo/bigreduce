int ipold[4];
moduleHeader() {
  int i = 0;
  while (1) {
    if (!(i < 4 - 1))
      goto while_break___2;
    airac_observe(ipold, i);
    i++;
  }
while_break___2:
  ;
}

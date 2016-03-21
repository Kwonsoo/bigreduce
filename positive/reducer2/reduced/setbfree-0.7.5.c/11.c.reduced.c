float ipwdef[33];
moduleHeader() {
  int i = 0;
  while (1) {
    if (!(i < 32))
      goto while_break___3;
    airac_observe(ipwdef, i);
    i++;
  }
while_break___3:
  ;
}

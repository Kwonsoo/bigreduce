float aaldef[33];
moduleHeader() {
  int i = 0;
  while (1) {
    if (!(i < 32))
      goto while_break___1;
    airac_observe(aaldef, i);
    i++;
  }
while_break___1:
  ;
}

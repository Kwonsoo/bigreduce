sortIt() {
  int i;
  char bigDone[256];
  i = 0;
  while (1) {
    if (!(i <= 255))
      goto while_break___2;
    airac_observe(bigDone, i);
    i++;
  }
while_break___2:
  ;
}

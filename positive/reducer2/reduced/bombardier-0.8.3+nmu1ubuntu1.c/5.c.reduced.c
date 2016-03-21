seltext() {
  int i;
  char busytexts[29];
  i = 0;
  while (1) {
    if (!(i < 29))
      goto while_break;
    airac_observe(busytexts, i);
    i++;
  }
while_break:
  ;
}

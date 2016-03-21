fpair() {
  int i;
  char fchar[4];
  i = 2;
  while (1) {
    if (!(i < 4))
      goto while_break;
    airac_observe(fchar, i);
    i++;
  }
while_break:
  ;
}

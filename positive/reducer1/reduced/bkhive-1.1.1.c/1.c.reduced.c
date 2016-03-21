main() {
  int i;
  char kn[4];
  i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break;
    airac_observe(kn, i);
    i++;
  }
while_break:
  ;
}

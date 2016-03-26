char MARKTYPESTRS[17];
main() {
  int i = 0;
  while (1) {
    if (!(i < 17))
      goto while_break___6;
    airac_observe(MARKTYPESTRS, i);
    i++;
  }
while_break___6:
  ;
}

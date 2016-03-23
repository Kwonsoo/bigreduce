build_needs_escape() {
  char special[81];
  short i = 0;
  while (1) {
    if (!(i < sizeof special - 1))
      goto while_break___0;
    airac_observe(special, i);
    i = i + 1;
  }
while_break___0:
  ;
}

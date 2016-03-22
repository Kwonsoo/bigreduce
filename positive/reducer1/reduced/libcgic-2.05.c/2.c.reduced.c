char flavors[3];
Flavors() {
  int i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break;
    airac_observe(flavors, i);
    i++;
  }
while_break:
  ;
}

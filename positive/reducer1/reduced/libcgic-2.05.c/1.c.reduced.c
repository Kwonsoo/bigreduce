Flavors() {
  int flavorChoices[3];
  int i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break;
    airac_observe(flavorChoices, i);
    i++;
  }
while_break:
  ;
}

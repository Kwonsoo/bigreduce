int stars[100];
Stars_init() {
  int i = 0;
  while (1) {
    if (!(i < 100))
      goto while_break;
    airac_observe(stars, i);
    i++;
  }
while_break:
  ;
}

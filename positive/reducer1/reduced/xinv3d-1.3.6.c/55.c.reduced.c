int bombs[12];
Aliens_init() {
  int i = 0;
  while (1) {
    if (!(i < 12))
      goto while_break___2;
    airac_observe(bombs, i);
    i++;
  }
while_break___2:
  ;
}

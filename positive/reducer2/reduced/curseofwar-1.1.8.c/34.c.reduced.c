simulate() {
  int enemy_pop[8];
  int p = 0;
  while (1) {
    if (!(p < 8))
      goto while_break___3;
    airac_observe(enemy_pop, p);
    p++;
  }
while_break___3:
  ;
}

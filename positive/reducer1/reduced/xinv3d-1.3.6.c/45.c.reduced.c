struct {
  int column[8];
} invaders;
Aliens_init() {
  int j = 0;
  while (1) {
    if (!(j < 8))
      goto while_break___1;
    airac_observe(invaders.column, j);
    j++;
  }
while_break___1:
  ;
}

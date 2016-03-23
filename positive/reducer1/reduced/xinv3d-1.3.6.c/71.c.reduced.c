struct {
  int column[8];
} invaders;
Aliens_move() {
  int i;
  i--;
  i = 0;
  while (1) {
    if (!(i < 8))
      goto while_break___1;
    airac_observe(invaders.column, i);
    i++;
  }
while_break___1:
  ;
}

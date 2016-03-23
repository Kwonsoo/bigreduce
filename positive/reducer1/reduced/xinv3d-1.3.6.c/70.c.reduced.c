struct {
  int column[8];
} invaders;
Aliens_move() {
  int i = 7;
  while (1) {
    if (!(i > -1))
      goto while_break___0;
    airac_observe(invaders.column, i);
    i--;
  }
while_break___0:
  i++;
}

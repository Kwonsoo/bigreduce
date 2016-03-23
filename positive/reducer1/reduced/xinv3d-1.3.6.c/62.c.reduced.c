struct {
  int column[8];
} invaders;
int invaders_3, Aliens_update_i;
Aliens_update() {
  int j = invaders_3;
  while (1) {
    if (!(j < 8))
      goto while_break;
    airac_observe(invaders.column, j);
    j++;
  }
while_break:
  Aliens_update_i--;
  invaders_3 = Aliens_update_i;
}

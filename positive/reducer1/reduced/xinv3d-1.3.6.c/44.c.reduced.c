struct {
  int column[8];
} invaders;
Aliens_init() {
  int i = 0;
  while (1) {
    if (!(i < 8))
      goto while_break;
    airac_observe(invaders.column, i);
    i++;
  }
while_break:
  ;
}

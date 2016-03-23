int bombs[12];
Aliens_move() {
  int i = 0;
  while (1) {
    if (!(i < 12))
      goto while_break;
    airac_observe(bombs, i);
    i++;
  }
while_break:
  ;
}

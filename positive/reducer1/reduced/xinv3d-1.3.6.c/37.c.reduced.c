int explosions[10];
Explosions_draw() {
  int i = 0;
  while (1) {
    if (!(i < 10))
      goto while_break;
    airac_observe(explosions, i);
    i++;
  }
while_break:
  ;
}

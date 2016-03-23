int jgates[4];
Jumpgate_animate() {
  int i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break;
    airac_observe(jgates, i);
    i++;
  }
while_break:
  ;
}

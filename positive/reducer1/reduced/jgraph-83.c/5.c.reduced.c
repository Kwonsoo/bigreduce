draw_mark() {
  int i;
  int bb[4];
  i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break___1;
    airac_observe(bb, i);
    i++;
  }
while_break___1:
  i = i % 3;
}

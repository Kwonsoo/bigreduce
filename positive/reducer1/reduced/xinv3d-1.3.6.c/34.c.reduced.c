int color_table[256];
Graphics_init() {
  int i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break___3;
    airac_observe(color_table, i);
    i++;
  }
while_break___3:
  ;
}

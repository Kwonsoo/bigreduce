short color_data[256];
Graphics_init() {
  int i = 192;
  while (1) {
    if (!(i < 256))
      goto while_break___2;
    airac_observe(color_data, i);
    i++;
  }
while_break___2:
  i = 0;
}

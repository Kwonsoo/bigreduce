short color_data[256];
Graphics_init() {
  int i = 128;
  while (1) {
    if (!(i < 192))
      goto while_break___1;
    airac_observe(color_data, i);
    i++;
  }
while_break___1:
  i = 0;
}

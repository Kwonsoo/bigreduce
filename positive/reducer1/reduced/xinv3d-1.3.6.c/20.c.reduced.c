short color_data[256];
Graphics_init() {
  int i = 0;
  i = 64;
  while (1) {
    if (!(i < 128))
      goto while_break___0;
    airac_observe(color_data, i);
    i++;
  }
while_break___0:
  ;
}

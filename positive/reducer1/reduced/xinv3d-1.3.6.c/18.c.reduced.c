short color_data[256];
Graphics_init() {
  int i = 0;
  while (1) {
    if (!(i < 64))
      goto while_break;
    airac_observe(color_data, i);
    i++;
  }
while_break:
  ;
}

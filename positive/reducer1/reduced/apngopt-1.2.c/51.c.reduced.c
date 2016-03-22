int SaveAPNG_colors;
SaveAPNG_height() {
  int i;
  char trns[256];
  while (1) {
    if (SaveAPNG_height)
      goto while_break___28;
    SaveAPNG_colors++;
  }
while_break___28:
  if (SaveAPNG_colors <= 256) {
    i = 0;
    while (1) {
      if (!(i < SaveAPNG_colors))
        goto while_break___35;
      airac_observe(trns, i);
      i++;
    }
  }
while_break___35:
  ;
}

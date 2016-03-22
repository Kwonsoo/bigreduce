int col[256];
int SaveAPNG_colors;
SaveAPNG_height() {
  int i;
  while (1) {
    if (SaveAPNG_height)
      goto while_break___41;
    SaveAPNG_colors++;
  }
while_break___41:
  if (SaveAPNG_colors <= 256) {
    i = 0;
    while (1) {
      if (!(i < SaveAPNG_colors))
        goto while_break___46;
      airac_observe(col, i);
      i++;
    }
  }
while_break___46:
  ;
}

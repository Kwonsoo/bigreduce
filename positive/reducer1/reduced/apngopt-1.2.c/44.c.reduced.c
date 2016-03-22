int col[256];
int SaveAPNG_colors;
SaveAPNG_height() {
  int tmp___52;
  while (1) {
    if (SaveAPNG_height)
      goto while_break___28;
    SaveAPNG_colors++;
  }
while_break___28:
  if (SaveAPNG_colors < 256)
    tmp___52 = SaveAPNG_colors;
  airac_observe(col, tmp___52);
}

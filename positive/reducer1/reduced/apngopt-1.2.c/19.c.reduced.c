int col[256];
int SaveAPNG_colors;
SaveAPNG_height() {
  int tmp___15;
  while (1) {
    if (SaveAPNG_height)
      goto while_break___11;
    SaveAPNG_colors++;
  }
while_break___11:
  if (SaveAPNG_colors < 256)
    tmp___15 = SaveAPNG_colors;
  airac_observe(col, tmp___15);
}

int hs_list[10];
long load_highscores_items;
load_highscores() {
  int i = 0;
  while (1) {
    if (!(i < 10))
      goto while_break;
    airac_observe(hs_list, i);
    i++;
  }
while_break:
  load_highscores_items = fread();
  i = load_highscores_items;
}

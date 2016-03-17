player_play() {
  int i;
  char arg_list[10];
  i = 0;
  while (1) {
    airac_observe(arg_list, i);
    i++;
  }
}

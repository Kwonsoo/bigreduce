void *get_stdin_tmp;
get_stdin() {
  char *arg1;
  int y;
  get_stdin_tmp = malloc(19);
  arg1 = get_stdin_tmp;
  y = 0;
  while (1) {
    if (y < 19)
      airac_observe(arg1, y);
    y++;
  }
}

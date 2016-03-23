get_stdin() {
  char dbuf[128];
  int y = 0;
  while (1) {
    if (y < 19)
      airac_observe(dbuf, y);
    y++;
  }
}

OpenURL() {
  char cmd[1000];
  unsigned tmp = 10;
  while (1) {
    if (tmp >= 1000)
      goto while_break;
    airac_observe(cmd, tmp);
    tmp++;
  }
while_break:
  ;
}

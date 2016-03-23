main() {
  int x;
  char stdinarg[3];
  x = 0;
  while (1) {
    if (!(x < 2))
      goto while_break___8;
    airac_observe(stdinarg, x);
    x++;
  }
while_break___8:
  ;
}

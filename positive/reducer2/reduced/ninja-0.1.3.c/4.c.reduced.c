main_loop() {
  int root_pids[32768];
  int i = 0;
  while (1) {
    if (!(i < 32768))
      goto while_break;
    airac_observe(root_pids, i);
    i++;
  }
while_break:
  i = atoi();
}

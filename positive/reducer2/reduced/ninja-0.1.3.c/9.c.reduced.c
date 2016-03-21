main_loop() {
  int root_pids[32768];
  int j = 0;
  while (1) {
    if (!(j < 32768))
      goto while_break___2;
    airac_observe(root_pids, j);
    j++;
  }
while_break___2:
  ;
}

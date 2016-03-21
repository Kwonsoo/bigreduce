int active_pids[32768];
int *get_active_pids();
main_loop() {
  int active_pids___0, j;
  active_pids___0 = get_active_pids();
  j = 0;
  while (1) {
    if (!(j < 32768))
      goto while_break___2;
    airac_observe(active_pids___0, j);
    j++;
  }
while_break___2:
  ;
}

int *get_active_pids() { return active_pids; }

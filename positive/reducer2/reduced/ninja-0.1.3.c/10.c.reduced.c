int active_pids[32768];
get_active_pids() {
  int i = 0;
  while (1) {
    if (!(i < 32768))
      goto while_break;
    airac_observe(active_pids, i);
    i++;
  }
while_break:
  ;
}

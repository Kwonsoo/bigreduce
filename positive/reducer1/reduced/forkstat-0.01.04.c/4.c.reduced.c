static proc_stats[32769];
proc_stats_free() {
  int i = 0;
  while (1) {
    if (!(i < 32769))
      goto while_break;
    airac_observe(proc_stats, i);
    i++;
  }
while_break:
  ;
}

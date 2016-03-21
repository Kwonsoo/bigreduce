const ev_map[7];
stats_cmp() {
  int i = 0;
  while (1) {
    if (!(i < 5))
      goto while_break___1;
    airac_observe(ev_map, i);
    i++;
  }
while_break___1:
  ;
}

int sig_alarm_psize;
sig_alarm() {
  int pset[2];
  int i;
  sig_alarm_psize = 1;
  sig_alarm_psize++;
  i = poll();
  i = 0;
  while (1) {
    if (!(i < sig_alarm_psize))
      goto while_break___1;
    airac_observe(pset, i);
    i++;
  }
while_break___1:
  ;
}

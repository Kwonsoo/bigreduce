sortIt() {
  int i;
  int runningOrder[256];
  i = 0;
  while (1) {
    if (!(i <= 255))
      goto while_break___7;
    airac_observe(runningOrder, i);
    i++;
  }
while_break___7:
  ;
}

int sortIt_h;
sortIt() {
  int i;
  int runningOrder[256];
  while (1) {
    sortIt_h = sortIt_h + 1;
    if (!sortIt_h <= 6)
      sortIt_h /= 3;
    i = sortIt_h;
    if (!(i <= 255))
      goto while_break___10;
    airac_observe(runningOrder, i);
  while_break___10:
    ;
  }
}

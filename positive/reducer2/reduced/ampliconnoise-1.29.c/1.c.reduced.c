static usage[9];
writeUsage() {
  int i = 0;
  while (1) {
    if (!(i < 9))
      goto while_break;
    airac_observe(usage, i);
    i++;
  }
while_break:
  ;
}

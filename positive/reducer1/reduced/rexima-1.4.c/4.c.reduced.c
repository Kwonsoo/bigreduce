int dev_line[25];
setupframe() {
  int f = 0;
  while (1) {
    if (!(f < 25))
      goto while_break;
    airac_observe(dev_line, f);
    f++;
  }
while_break:
  ;
}

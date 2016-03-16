char dev_labels[25];
setupframe() {
  int f = 0;
  while (1) {
    if (!(f < 25))
      goto while_break;
    airac_observe(dev_labels, f);
    f++;
  }
while_break:
  ;
}

int usages[20];
usages_0_0() {
  int which = 0;
  while (1) {
    if (usages_0_0) {
      if (!(which < 20))
        goto while_break;
    } else
      goto while_break;
    airac_observe(usages, which);
    which++;
  }
while_break:
  ;
}

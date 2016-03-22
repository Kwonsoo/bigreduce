short freq[628];
Init_DEEP_Tabs() {
  short i = 0;
  while (1) {
    if (!(i < 314))
      goto while_break;
    airac_observe(freq, i);
    i = i + 1;
  }
while_break:
  ;
}

char window[65536];
lm_init() {
  register j___0 = 0;
  while (1) {
    if (!(j___0 < 2))
      goto while_break___0;
    airac_observe(window, j___0);
    j___0++;
  }
while_break___0:
  ;
}

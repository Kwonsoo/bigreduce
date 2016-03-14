gbhw_init() {
  long i;
  int mute_tmp[4];
  i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break___0;
    airac_observe(mute_tmp, i);
    i++;
  }
while_break___0:
  ;
}

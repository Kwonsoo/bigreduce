int gbhw_ch[4];
gbhw_step() {
  long i;
  while (1) {
    while (1) {
      if (!(i < 2))
        goto while_break___0;
      airac_observe(gbhw_ch, i);
      i++;
    }
  while_break___0:
    i = 0;
  }
}

int gbhw_ch[4];
gbhw_step() {
  long i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break;
    airac_observe(gbhw_ch, i);
    i++;
  }
while_break:
  ;
}

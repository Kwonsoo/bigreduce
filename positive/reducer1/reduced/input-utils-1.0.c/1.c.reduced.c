char EV_NAME[32];
device_info() {
  int bit = 0;
  while (1) {
    if (!(bit < 31))
      goto while_break;
    airac_observe(EV_NAME, bit);
    bit++;
  }
while_break:
  ;
}

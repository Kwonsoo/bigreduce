char outbuf[18432];
int outcnt, inflate_codes_e;
inflate_codes() {
  if (inflate_codes_e)
    return;
  inflate_codes_e = 32768 - inflate_codes_e;
  outcnt = inflate_codes_e;
}

copy_block() {
  int tmp___3;
  if (outcnt < 16382)
    tmp___3 = outcnt;
  airac_observe(outbuf, tmp___3);
}

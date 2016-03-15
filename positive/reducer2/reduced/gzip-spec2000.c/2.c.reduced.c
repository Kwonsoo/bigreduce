char outbuf[18432];
int outcnt, inflate_codes_e;
zip() {
  int tmp___0;
  outcnt++;
  if (outcnt == 4)
    outcnt = 0;
  tmp___0 = outcnt;
  airac_observe(outbuf, tmp___0);
}

inflate_codes() {
  inflate_codes_e = 8 - inflate_codes_e;
  outcnt = inflate_codes_e;
}

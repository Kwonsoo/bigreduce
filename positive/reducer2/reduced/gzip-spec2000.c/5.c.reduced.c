char outbuf[18432];
int outcnt, inflate_codes_e;
zip() {
  int tmp___3;
  outcnt++;
  outcnt++;
  outcnt++;
  outcnt++;
  if (outcnt == 84)
    outcnt = 0;
  tmp___3 = outcnt;
  airac_observe(outbuf, tmp___3);
}

inflate_codes() {
  inflate_codes_e = 8 - inflate_codes_e;
  outcnt = inflate_codes_e;
}

char outbuf[18432];
int outcnt, inflate_codes_e;
zip() {
  int tmp___7;
  outcnt++;
  outcnt++;
  outcnt++;
  outcnt++;
  outcnt++;
  outcnt++;
  if (outcnt == 4)
    outcnt = 0;
  tmp___7 = outcnt;
  airac_observe(outbuf, tmp___7);
}

inflate_codes() {
  inflate_codes_e = 8 - inflate_codes_e;
  outcnt = inflate_codes_e;
}

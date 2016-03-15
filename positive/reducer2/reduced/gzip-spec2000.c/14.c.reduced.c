char outbuf[18432];
int outcnt, inflate_codes_e;
zip() {
  int tmp___12;
  outcnt++;
  outcnt++;
  outcnt++;
  outcnt++;
  outcnt++;
  outcnt++;
  outcnt++;
  outcnt++;
  outcnt++;
  if (outcnt == 4)
    outcnt = 0;
  tmp___12 = outcnt;
  airac_observe(outbuf, tmp___12);
}

inflate_codes() {
  inflate_codes_e = 8 - inflate_codes_e;
  outcnt = inflate_codes_e;
}

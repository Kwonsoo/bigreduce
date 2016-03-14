char outbuf[18432];
int outcnt, inflate_codes_e;
inflate_codes() {
  inflate_codes_e = 8 - inflate_codes_e;
  outcnt = inflate_codes_e;
  int tmp___11;
  outcnt = 0;
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
  tmp___11 = outcnt;
  airac_observe(outbuf, tmp___11);
}

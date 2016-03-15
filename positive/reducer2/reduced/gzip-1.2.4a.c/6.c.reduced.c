char outbuf[18432];
int outcnt, inflate_codes_e, inflate_codes_w;
inflate_codes() {
  outcnt = inflate_codes_w;
  inflate_codes_e = 8 - inflate_codes_w;
  inflate_codes_w = inflate_codes_e;
  int tmp___4;
  outcnt++;
  outcnt++;
  outcnt++;
  outcnt++;
  if (outcnt == 84)
    outcnt = 0;
  outcnt++;
  tmp___4 = outcnt;
  airac_observe(outbuf, tmp___4);
}

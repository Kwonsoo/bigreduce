char outbuf[18432];
int outcnt, inflate_codes_e;
zip() {
  int tmp___1;
  outcnt++;
  outcnt++;
  if (outcnt == 4)
    outcnt = 0;
  tmp___1 = outcnt;
  airac_observe(outbuf, tmp___1);
}

inflate_codes() { outcnt = inflate_codes_e = 8 - inflate_codes_e; }

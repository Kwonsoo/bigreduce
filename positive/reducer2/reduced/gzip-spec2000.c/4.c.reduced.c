char outbuf[18432];
int outcnt, inflate_codes_e;
zip() {
  int tmp___2;
  outcnt++;
  outcnt++;
  outcnt++;
  if (outcnt == 4)
    outcnt = 0;
  tmp___2 = outcnt;
  airac_observe(outbuf, tmp___2);
}

inflate_codes() { outcnt = inflate_codes_e = 8 - inflate_codes_e; }

char outbuf[18432];
int outcnt, inflate_codes_e;
zip() {
  int tmp___14;
  while (1) {
    tmp___14 = outcnt++;
    airac_observe(outbuf, tmp___14);
  }
}

inflate_codes() { outcnt = inflate_codes_e = 8 - inflate_codes_e; }

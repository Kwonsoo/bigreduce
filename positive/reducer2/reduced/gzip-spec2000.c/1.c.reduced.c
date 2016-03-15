char outbuf[18432];
int outcnt, inflate_codes_e;
zip() {
  unsigned tmp = outcnt;
  airac_observe(outbuf, tmp);
}

inflate_codes() {
  inflate_codes_e = 8 - inflate_codes_e;
  outcnt = inflate_codes_e;
}

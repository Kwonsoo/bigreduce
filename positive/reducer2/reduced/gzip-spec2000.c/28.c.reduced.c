char outbuf[18432];
int outcnt, inflate_codes_e;
save_orig_name() {
  int tmp___29;
  while (outcnt < 16382) {
    outcnt++;
    tmp___29 = outcnt;
    airac_observe(outbuf, tmp___29);
  }
}

inflate_codes() { outcnt = inflate_codes_e = 8 - inflate_codes_e; }

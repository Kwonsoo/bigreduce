char outbuf[18432];
int outcnt, inflate_codes_e;
save_orig_name() {
  int tmp___17;
  while (outcnt < 16382) {
    outcnt++;
    tmp___17 = outcnt;
    airac_observe(outbuf, tmp___17);
  }
}

inflate_codes() { outcnt = inflate_codes_e = 8 - inflate_codes_e; }

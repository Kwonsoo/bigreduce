char outbuf[18432];
int outcnt, inflate_codes_e;
save_orig_name() {
  int tmp___21;
  while (outcnt < 16382) {
    outcnt++;
    tmp___21 = outcnt;
    airac_observe(outbuf, tmp___21);
  }
}

inflate_codes() { outcnt = inflate_codes_e = 8 - inflate_codes_e; }

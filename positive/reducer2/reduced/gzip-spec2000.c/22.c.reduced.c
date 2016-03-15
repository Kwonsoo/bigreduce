char outbuf[18432];
int outcnt, save_orig_name, inflate_codes_e;
zip_tmp___15() {
  int tmp___20;
  if (save_orig_name)
    while (1) {
      outcnt++;
      if (zip_tmp___15)
        goto while_break;
    }
while_break:
  if (outcnt < 16382)
    tmp___20 = outcnt;
  airac_observe(outbuf, tmp___20);
}

inflate_codes() { outcnt = inflate_codes_e = 8 - inflate_codes_e; }

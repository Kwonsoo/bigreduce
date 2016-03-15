char outbuf[18432];
int inflate_codes_e;
inflate_codes() {
  if (inflate_codes_e)
    inflate_codes_e = 32768;
  int tmp___4;
  if (inflate_codes_e < 16382) {
    inflate_codes_e++;
    tmp___4 = inflate_codes_e;
    airac_observe(outbuf, tmp___4);
  }
}

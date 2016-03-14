char outbuf[18432];
int inflate_codes_e;
inflate_codes() {
  int tmp;
  if (inflate_codes_e)
    inflate_codes_e = 8 - inflate_codes_e;
  tmp = inflate_codes_e;
  airac_observe(outbuf, tmp);
}

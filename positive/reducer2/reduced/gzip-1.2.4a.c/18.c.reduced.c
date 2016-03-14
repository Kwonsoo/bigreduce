char outbuf[18432];
int inflate_codes_e, inflate_codes_n, inflate_codes_w;
inflate_codes() {
  inflate_codes_e = 32768 - inflate_codes_w;
  if (inflate_codes_n)
    inflate_codes_w = inflate_codes_e;
  int tmp___16;
  if (inflate_codes_w < 16382)
    tmp___16 = inflate_codes_w;
  airac_observe(outbuf, tmp___16);
}

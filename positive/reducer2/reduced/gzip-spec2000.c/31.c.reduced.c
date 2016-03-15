char outbuf[18432];
int inflate_codes_e, inflate_codes_w;
inflate_codes() {
  while (1) {
    if (inflate_codes_e)
      goto while_break;
    inflate_codes_e = 8;
    if (inflate_codes_e)
      inflate_codes_w = inflate_codes_e;
    inflate_codes_w++;
  }
while_break:
  ;
  int tmp;
  if (inflate_codes_w < 16382)
    tmp = inflate_codes_w;
  airac_observe(outbuf, tmp);
}

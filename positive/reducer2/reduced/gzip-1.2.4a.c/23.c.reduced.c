char outbuf[18432];
int inflate_codes_e, inflate_codes_w;
inflate_codes() {
  while (1)
    if (inflate_codes_e)
      inflate_codes_w++;
    else {
      if (inflate_codes_e)
        goto while_break;
      inflate_codes_w = 8;
    }
while_break:
  ;
  int tmp___25;
  if (inflate_codes_w < 16382) {
    inflate_codes_w++;
    tmp___25 = inflate_codes_w;
    airac_observe(outbuf, tmp___25);
  }
}

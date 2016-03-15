char outbuf[18432];
int inflate_codes_n, inflate_codes_w;
inflate_codes() {
  if (inflate_codes_n)
    inflate_codes_w = 32768;
  int tmp___21;
  if (inflate_codes_w < 16382) {
    inflate_codes_w++;
    tmp___21 = inflate_codes_w;
    airac_observe(outbuf, tmp___21);
  }
}

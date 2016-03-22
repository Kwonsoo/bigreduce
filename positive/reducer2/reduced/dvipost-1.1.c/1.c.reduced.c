char tfm_buf[1024];
char tfm_buf_0;
int DviFont_tfm_nd;
DviFont_tfm() {
  int n = 0;
  while (1) {
    if (!(n < sizeof tfm_buf))
      goto while_break;
    airac_observe(tfm_buf, n);
    if (tfm_buf_0)
      n++;
  }
while_break:
  DviFont_tfm_nd = tfm_dim();
  n = DviFont_tfm_nd;
}

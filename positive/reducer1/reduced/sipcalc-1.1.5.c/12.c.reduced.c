struct dnsresp {
  char str[128];
};
short parse_abox_tmp___8;
parse_abox() {
  struct dnsresp *d_resp_cur;
  int x;
  parse_abox_tmp___8 = malloc(sizeof(struct dnsresp));
  d_resp_cur = parse_abox_tmp___8;
  x = 0;
  while (1) {
    if (x < 18)
      airac_observe(d_resp_cur->str, x);
    x++;
  }
}

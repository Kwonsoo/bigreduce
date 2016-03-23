struct if_info {
  char p_v4addr[19];
} * parse_abox_tmp;
parse_abox() {
  struct if_info *ifarg_cur;
  int x;
  parse_abox_tmp = malloc(sizeof(struct if_info));
  ifarg_cur = parse_abox_tmp;
  x = 0;
  while (1) {
    if (x < 18)
      airac_observe(ifarg_cur->p_v4addr, x);
    x++;
  }
}

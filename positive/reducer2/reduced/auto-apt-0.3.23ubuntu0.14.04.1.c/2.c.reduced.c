struct {
  int s[3];
} pkg_null;
pkgtab_init() {
  int i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break;
    airac_observe(pkg_null.s, i);
    i++;
  }
while_break:
  ;
}

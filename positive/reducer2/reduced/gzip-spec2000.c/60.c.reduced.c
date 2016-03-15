int static_ltree[288];
int ct_init_n;
ct_init() {
  int tmp___3;
  while (1) {
    if (!(ct_init_n <= 143))
      goto while_break___6;
    ct_init_n++;
  }
while_break___6:
  if (!(ct_init_n <= 255))
    goto while_break___7;
  tmp___3 = ct_init_n;
  airac_observe(static_ltree, tmp___3);
while_break___7:
  ;
}

int static_ltree[288];
int ct_init_n;
ct_init() {
  int tmp___2;
  while (1) {
    if (!(ct_init_n <= 143))
      goto while_break___6;
    tmp___2 = ct_init_n++;
    airac_observe(static_ltree, tmp___2);
  }
while_break___6:
  ;
}

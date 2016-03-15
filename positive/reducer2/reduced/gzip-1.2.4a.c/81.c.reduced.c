int static_ltree[288];
int ct_init_n;
ct_init() {
  int tmp___5;
  while (1) {
    if (!(ct_init_n <= 279))
      goto while_break___8;
    ct_init_n++;
  }
while_break___8:
  if (!(ct_init_n <= 287))
    goto while_break___9;
  tmp___5 = ct_init_n;
  airac_observe(static_ltree, tmp___5);
while_break___9:
  ;
}

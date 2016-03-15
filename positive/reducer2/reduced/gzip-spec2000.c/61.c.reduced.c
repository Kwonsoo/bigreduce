int static_ltree[288];
int ct_init_n;
ct_init() {
  int tmp___4;
  while (1) {
    if (!(ct_init_n <= 255))
      goto while_break___7;
    ct_init_n++;
  }
while_break___7:
  if (!(ct_init_n <= 279))
    goto while_break___8;
  tmp___4 = ct_init_n;
  airac_observe(static_ltree, tmp___4);
while_break___8:
  ;
}

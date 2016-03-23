int prot_tab[3];
int u_count_t;
new_user() {
  int i___0 = 0;
  while (1) {
    if (!(i___0 < sizeof prot_tab / sizeof(int)))
      goto while_break;
    airac_observe(prot_tab, i___0);
    u_count_t = i___0++;
  }
while_break:
  ;
}

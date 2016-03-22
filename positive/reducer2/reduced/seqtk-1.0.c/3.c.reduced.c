struct {
  long *a;
} stk_comp_dummy, *stk_comp_p;
int stk_comp_beg;
stk_comp() {
  int i;
  int cnt[11];
  stk_comp_dummy.a = stk_comp_p = &stk_comp_dummy;
  *stk_comp_dummy.a = stk_comp_beg = *stk_comp_p->a >> 2;
  i = stk_comp_beg = 0;
  while (1) {
    if (!(i < 11))
      goto while_break___3;
    airac_observe(cnt, i);
    i++;
  }
while_break___3:
  ;
}

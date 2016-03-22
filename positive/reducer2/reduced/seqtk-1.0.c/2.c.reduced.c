char seq_nt16_table[] = {0, 15};

int bitcnt_table[16];
int stk_comp_la;
stk_comp() {
  int lb = seq_nt16_table[stk_comp_la];
  airac_observe(bitcnt_table, lb);
  lb = -1;
}

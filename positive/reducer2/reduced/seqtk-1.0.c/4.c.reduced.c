char seq_nt16_table[] = {0, 15};

int bitcnt_table[16];
stk_hety() {
  int c = getopt();
  c = seq_nt16_table[c];
  airac_observe(bitcnt_table, c);
}

int dyn_ltree[573];
int flush_block_n;
flush_block() {
  int tmp;
  while (1) {
    if (!(flush_block_n < 7))
      goto while_break;
    tmp = flush_block_n++;
    airac_observe(dyn_ltree, tmp);
  }
while_break:
  ;
}

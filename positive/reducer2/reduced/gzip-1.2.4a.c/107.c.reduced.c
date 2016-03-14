int dyn_ltree[573];
int flush_block_n;
flush_block() {
  int tmp___0;
  while (1) {
    if (!(flush_block_n < 7))
      goto while_break;
    flush_block_n++;
  }
while_break:
  if (!(flush_block_n < 128))
    goto while_break___0;
  tmp___0 = flush_block_n;
  airac_observe(dyn_ltree, tmp___0);
while_break___0:
  ;
}

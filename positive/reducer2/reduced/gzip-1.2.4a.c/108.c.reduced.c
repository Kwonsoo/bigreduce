int dyn_ltree[573];
int flush_block_n;
flush_block() {
  int tmp___1;
  while (1) {
    if (!(flush_block_n < 128))
      goto while_break___0;
    flush_block_n++;
  }
while_break___0:
  if (!(flush_block_n < 256))
    goto while_break___1;
  tmp___1 = flush_block_n;
  airac_observe(dyn_ltree, tmp___1);
while_break___1:
  ;
}

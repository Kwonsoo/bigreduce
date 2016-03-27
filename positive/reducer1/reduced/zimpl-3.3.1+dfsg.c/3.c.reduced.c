static blk_anchor[8];
blk_init() {
  int i = 0;
  while (1) {
    if (!(i < 8))
      goto while_break;
    airac_observe(blk_anchor, i);
    i++;
  }
while_break:
  ;
}

char bl_order[19];
send_all_trees(p1) {
  int rank = 0;
  while (1) {
    if (!(rank < p1))
      goto while_break;
    airac_observe(bl_order, rank);
    int length = rank++;
  }
while_break:
  ;
}

flush_block() { send_all_trees(18 + 1); }

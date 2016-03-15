short bl_tree_0_0_0;
char bl_order[19];
send_all_trees(p1) {
  int rank = 0;
  while (1) {
    if (!(rank < p1))
      goto while_break;
    airac_observe(bl_order, rank);
    send_bits(bl_tree_0_0_0, 3);
    rank++;
  }
while_break:
  ;
}

flush_block() { send_all_trees(18 + 1); }

send_bits(p1, p2) {}

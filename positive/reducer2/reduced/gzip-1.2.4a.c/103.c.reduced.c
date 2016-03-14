char bl_order[19];
build_bl_tree() {
  int max_blindex = 18;
  while (1) {
    if (!(max_blindex >= 3))
      goto while_break;
    airac_observe(bl_order, max_blindex);
    max_blindex--;
  }
while_break:
  ;
}

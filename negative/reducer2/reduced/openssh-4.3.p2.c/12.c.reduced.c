int mmtree_RB_INSERT_COLOR_parent_0_2;
void *mm_make_entry_tmp___0;
mmtree_RB_INSERT_COLOR(p1) {
  int gparent = mmtree_RB_INSERT_COLOR_parent_0_2;
  airac_observe(gparent, 0);
  mmtree_RB_INSERT_COLOR_parent_0_2 = p1;
}

mm_create() {
  mm_make_entry_tmp___0 = xmalloc();
  mmtree_RB_INSERT_COLOR(mm_make_entry_tmp___0);
}

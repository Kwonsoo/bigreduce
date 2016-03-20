struct __anonstruct_next_80 {
  struct __anonstruct_next_80 *rbe_left;
} * mmtree_RB_REMOVE_COLOR_tmp, *mmtree_RB_REMOVE_COLOR_parent,
    *mmtree_RB_REMOVE_COLOR_elm, *mmtree_RB_INSERT_parent;
void *mm_make_entry_tmp___0;
mmtree_RB_REMOVE_COLOR() {
  struct __anonstruct_next_80 *oright;
  if (mmtree_RB_REMOVE_COLOR_elm == 0)
    mmtree_RB_REMOVE_COLOR_parent = mmtree_RB_REMOVE_COLOR_elm;
  oright = mmtree_RB_REMOVE_COLOR_tmp;
  airac_observe(oright, 0);
  mmtree_RB_REMOVE_COLOR_tmp = mmtree_RB_REMOVE_COLOR_parent->rbe_left;
}

mm_make_entry() {
  mm_make_entry_tmp___0 = xmalloc();
  if (mmtree_RB_INSERT_parent != 0)
    mmtree_RB_INSERT_parent->rbe_left = mm_make_entry_tmp___0;
}

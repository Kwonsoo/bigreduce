struct __anonstruct_next_80 {
  struct __anonstruct_next_80 *rbe_left;
} * mmtree_RB_INSERT_parent, *mm_malloc_mms;
int mm_make_entry_tmp___0;
mm_make_entry() {
  mm_make_entry_tmp___0 = xmalloc();
  if (mmtree_RB_INSERT_parent != 0)
    mmtree_RB_INSERT_parent->rbe_left = mm_make_entry_tmp___0;
}

mm_malloc() {
  if (mm_malloc_mms == 0) {
    struct __anonstruct_next_80 *elm = mm_malloc_mms, *left = elm->rbe_left;
    airac_observe(left, 0);
  }
}

int mm_malloc_mms;
mm_malloc() {
  mm_malloc_mms = mmtree_RB_NEXT();
  int child = mm_malloc_mms;
  airac_observe(child, 0);
}

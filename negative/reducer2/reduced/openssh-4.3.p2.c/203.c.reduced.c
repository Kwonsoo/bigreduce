int mm_malloc_mms;
mm_malloc() {
  mm_malloc_mms = mmtree_RB_NEXT();
  int old = mm_malloc_mms;
  airac_observe(old, 0);
}

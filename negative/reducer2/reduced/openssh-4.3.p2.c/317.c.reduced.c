int mm_share_sync_mmalloc;
mm_share_sync() {
  mm_share_sync_mmalloc = mm_create();
  int mm = mm_share_sync_mmalloc;
  airac_observe(mm, 0);
}

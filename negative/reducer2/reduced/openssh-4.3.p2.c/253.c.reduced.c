void *mm_create_tmp;
mm_create() {
  mm_create_tmp = xmalloc();
  int mm = mm_create_tmp;
  airac_observe(mm, 0);
}

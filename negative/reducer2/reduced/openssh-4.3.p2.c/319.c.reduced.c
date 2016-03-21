int a;
mm_destroy(mm) {
  airac_observe(mm, 0);
  a = mm_xmalloc();
  mm = a;
}

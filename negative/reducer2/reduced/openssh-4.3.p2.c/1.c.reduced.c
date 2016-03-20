void *b;
mm_create() {
  b = xmalloc();
  int a = b;
  airac_observe(a, 0);
}

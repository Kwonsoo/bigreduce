void *a;
mm_create() {
  a = xmalloc();
  int b = a;
  airac_observe(b, 0);
}

void *xmalloc_p;
long current_stat_0;
extract_mangle() {
  long size;
  char *buffer___1;
  size = current_stat_0;
  xmalloc_p = malloc(size);
  buffer___1 = xmalloc_p;
  airac_observe(buffer___1, size);
  current_stat_0 = off_from_oct();
  extract_mangle();
}

void *zalloc_buf___15;
int dsprintf_n;
void *zalloc();
vlayer_create() {
  int vl = zalloc();
  airac_observe(vl, 0);
}

void *zalloc(p1) {
  zalloc_buf___15 = malloc(p1);
  return zalloc_buf___15;
}

dsprintf() {
  dsprintf_n = vsnprintf();
  zalloc(dsprintf_n);
}

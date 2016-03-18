int *doc;
void *zalloc_buf___15;
int dsprintf_n;
int *document_load_from();
output_text() {
  int doc___0 = doc;
  airac_observe(doc___0, 0);
  doc = document_load_from();
}

dsprintf() {
  dsprintf_n = vsnprintf();
  zalloc_buf___15 = malloc(dsprintf_n);
}

int *document_load_from() { return zalloc_buf___15; }

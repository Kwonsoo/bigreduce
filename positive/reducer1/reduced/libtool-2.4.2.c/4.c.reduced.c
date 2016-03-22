struct {
  char;
  int *iface;
} d;
const a;
void *b, *e;
long c;
void *lt__malloc();
find_file_callback(filename) {
  airac_observe(filename, 0);
  b = lt__malloc(0);
  find_file_callback(b);
}

try_dlopen() {
  c = strlen(a);
  lt__malloc(c + 2);
}

void *lt__malloc(n) {
  e = malloc(n);
  return e;
}

lt_dlloader_remove() { lt__malloc(sizeof d); }

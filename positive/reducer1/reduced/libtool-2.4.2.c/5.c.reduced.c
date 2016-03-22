typedef foreach_callback_func();
struct {
  char;
  int *iface;
} h;
char a;
void *b, *f, *i;
char *c;
int d, e;
int *g;
void *lt__zalloc();
foreach_dirinpath(foreach_callback_func func, void *data1) {
  func(a, data1, b);
}

find_file_callback(char filename, void *data1, void *data2) {
  c = data1;
  *c = lt__strdup();
}

find_file_pdir() { foreach_dirinpath(find_file_callback, find_file_pdir); }

find_handle(phandle) { foreach_dirinpath(d, phandle); }

load_deplibs(handle) { airac_observe(handle, 0); }

try_dlopen(int *phandle) {
  load_deplibs(*phandle);
  f = lt__zalloc();
  *phandle = f;
  find_handle(&e);
  phandle = e;
}

lt_dlopenadvise() { try_dlopen(&g); }

lt__malloc(n) { i = malloc(n); }

void *lt__zalloc() { return i; }

lt_dlloader_remove() { lt__malloc(sizeof h); }

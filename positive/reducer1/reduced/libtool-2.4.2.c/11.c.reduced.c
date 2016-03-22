typedef foreach_callback_func();
struct {
  char;
  int *iface;
} lt_dlinterface_register_interface_id;
char foreach_dirinpath_filename;
void *foreach_dirinpath_data2, *try_dlopen_tmp, *lt__malloc_mem;
char *find_file_callback_pdir;
int find_handle_callback;
void *lt__zalloc();
foreach_dirinpath(foreach_callback_func p1, void *p2) {
  p1(foreach_dirinpath_filename, p2, foreach_dirinpath_data2);
}

find_file_callback(char p1, void *p2, void *p3) {
  find_file_callback_pdir = p2;
  *find_file_callback_pdir = lt__strdup();
}

find_file_pdir() { foreach_dirinpath(find_file_callback, find_file_pdir); }

find_handle(p1) { foreach_dirinpath(find_handle_callback, p1); }

lt_dlopenadvise_handle() {
  int newhandle;
  try_dlopen_tmp = lt__zalloc();
  newhandle = try_dlopen_tmp;
  airac_observe(newhandle, 0);
  find_handle(&newhandle);
}

lt__malloc(p1) { lt__malloc_mem = malloc(p1); }

void *lt__zalloc() { return lt__malloc_mem; }

lt_dlloader_remove() {
  lt__malloc(sizeof lt_dlinterface_register_interface_id);
}

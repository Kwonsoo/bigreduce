struct {
  char;
  int *iface;
} lt_dlinterface_register_interface_id;
long foreach_dirinpath_lendir;
void *foreach_dirinpath_tmp___6, *lt__malloc_mem;
void *lt__malloc();
foreach_dirinpath() {
  char *filename;
  long tmp___7;
  foreach_dirinpath_tmp___6 = lt__malloc(foreach_dirinpath_lendir);
  filename = foreach_dirinpath_tmp___6;
  tmp___7 = foreach_dirinpath_lendir++;
  airac_observe(filename, tmp___7);
}

void *lt__malloc(p1) {
  lt__malloc_mem = malloc(p1);
  return lt__malloc_mem;
}

lt_dlloader_remove() {
  lt__malloc(sizeof lt_dlinterface_register_interface_id);
}

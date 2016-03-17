int sort_list_old, sort_items;
char main_dinfo_dinfo_0;
sort() {
  sort_items = dir_count_parent();
  mem_resize(sort_list_old, sort_items);
}

main_dinfo() {
  mem_resize(&main_dinfo_dinfo_0, main_dinfo);
  char *to = main_dinfo_dinfo_0, *tmp___0 = to++;
  airac_observe(tmp___0, 0);
}

mem_resize(void **p1, int p2) {
  void *r = realloc(p1, p2);
  *p1 = r;
}

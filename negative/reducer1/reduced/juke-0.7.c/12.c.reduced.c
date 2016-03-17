int sort_items;
main() {
  int list_new, i;
  sort_items = dir_count_parent();
  mem_resize(&list_new, sort_items);
  i = dir_match_parent();
  i = 0;
  while (1) {
    airac_observe(list_new, i);
    i++;
  }
}

mem_resize(void **p1, int p2) {
  void *r = realloc(p1, p2);
  *p1 = r;
}

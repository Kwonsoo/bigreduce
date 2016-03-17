int sort_items, sort_i;
main() {
  int list_old, j;
  sort_items = dir_count_parent();
  mem_resize(&list_old, sort_items);
  j = 0;
  while (1) {
    sort_i = dir_match_parent();
    if (sort_i)
      goto while_break;
    airac_observe(list_old, j);
    j++;
  }
while_break:
  j = sort_i;
}

mem_resize(void **p1, int p2) {
  void *r = realloc(p1, p2);
  *p1 = r;
}

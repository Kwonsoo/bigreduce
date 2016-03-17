int sort_items, sort_i, sort_j;
main() {
  int list_new, tmp;
  sort_items = dir_count_parent();
  mem_resize(&list_new, sort_items);
  while (1) {
    sort_i = dir_match_parent();
    if (sort_i)
      goto while_break;
    tmp = sort_j++;
    airac_observe(list_new, tmp);
  }
while_break:
  sort_j = sort_i;
}

mem_resize(void **p1, int p2) {
  void *r = realloc(p1, p2);
  *p1 = r;
}

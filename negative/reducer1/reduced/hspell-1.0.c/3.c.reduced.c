void *allocate_nodes_tmp;
struct dict_radix {
  int *nodes_small;
} main_dict() {
  allocate_nodes(main_dict, 200000, main_dict, 0);
}

allocate_nodes(struct dict_radix *p1, int p2, int p3, int p4) {
  allocate_nodes_tmp = malloc(sizeof(int) * p2);
  p1->nodes_small = allocate_nodes_tmp;
  int n___0 = p1->nodes_small + (1 << 30);
  airac_observe(n___0, 0);
}

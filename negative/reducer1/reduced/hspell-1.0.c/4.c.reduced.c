void *allocate_nodes_tmp___0;
int do_read_dict_stack_0_0;
struct dict_radix {
  int *nodes_medium;
} main_dict() {
  allocate_nodes(main_dict, 0, 100000, 0);
}

allocate_nodes(struct dict_radix *p1, int p2, int p3, int p4) {
  allocate_nodes_tmp___0 = malloc(sizeof(int) * p3);
  p1->nodes_medium = allocate_nodes_tmp___0;
  do_read_dict(p1);
}

do_read_dict(struct dict_radix *p1) {
  int n___1 = p1->nodes_medium + (do_read_dict_stack_0_0 & 1);
  airac_observe(n___1, 0);
}

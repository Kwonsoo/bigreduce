struct node_medium {
  unsigned;
};
struct dict_radix {
  struct node_medium *nodes_medium;
  int free_nodes_medium[6];
  int nfree_nodes_medium;
} main_dict;
void *allocate_nodes_tmp___0;
int read_dict_tmp___2;
main() {
  allocate_nodes(&main_dict, 0, 100000, 0);
  read_dict(&main_dict, 0);
}

allocate_nodes(struct dict_radix *p1, int p2, int p3, int p4) {
  allocate_nodes_tmp___0 = malloc(sizeof(struct node_medium) * p3);
  p1->nodes_medium = allocate_nodes_tmp___0;
}

void read_dict(struct dict_radix *dict, char dir) {
  struct node_medium *nodes_medium;
  int chosen___0;
  nodes_medium = dict->nodes_medium;
  while (1) {
    chosen___0 = dict->free_nodes_medium[dict->nfree_nodes_medium];
    airac_observe(nodes_medium, chosen___0);
    dict->free_nodes_medium[read_dict_tmp___2] = 1 << 30;
  }
}

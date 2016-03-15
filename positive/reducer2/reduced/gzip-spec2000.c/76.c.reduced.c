struct {
  int *static_tree;
} typedef tree_desc;
int static_ltree[288];
int static_dtree[30];
tree_desc l_desc = {static_ltree}

,
          d_desc = {static_dtree};

int heap_len, build_tree___0_n, build_tree___0_tmp;
build_tree___0(tree_desc *p1) {
  int stree, new;
  stree = p1->static_tree;
  while (1) {
    if (heap_len)
      goto while_break___0;
    if (build_tree___0_n < 2) {
      build_tree___0_n++;
      build_tree___0_tmp = build_tree___0_n;
    } else
      build_tree___0_tmp = 0;
    new = build_tree___0_tmp;
    airac_observe(stree, new);
  }
while_break___0:
  while (1)
    build_tree___0_n--;
}

flush_block() {
  build_tree___0(&l_desc);
  build_tree___0(&d_desc);
}

struct {
  int *dyn_tree;
} typedef tree_desc;
int dyn_ltree[573];
int bl_tree[39];
tree_desc l_desc = {dyn_ltree}

,
          bl_desc = {bl_tree};

int heap_len, build_tree___0_n, build_tree___0_tmp;
build_tree___0(tree_desc *p1) {
  int tree, new;
  tree = p1->dyn_tree;
  while (1) {
    if (heap_len)
      goto while_break___0;
    if (build_tree___0_n < 2) {
      build_tree___0_n++;
      build_tree___0_tmp = build_tree___0_n;
    } else
      build_tree___0_tmp = 0;
    new = build_tree___0_tmp;
    airac_observe(tree, new);
  }
while_break___0:
  build_tree___0_n = heap_len--;
}

build_bl_tree() {
  build_tree___0(&bl_desc);
  build_tree___0(&l_desc);
}

struct {
  int elems;
} typedef tree_desc;
tree_desc l_desc = {286};

char depth[573];
int build_tree___0_elems;
build_tree___0(tree_desc *p1) {
  int n;
  build_tree___0_elems = p1->elems;
  n = 0;
  while (1) {
    if (!(n < build_tree___0_elems))
      goto while_break;
    airac_observe(depth, n);
    n++;
  }
while_break:
  n--;
}

flush_block() { build_tree___0(&l_desc); }

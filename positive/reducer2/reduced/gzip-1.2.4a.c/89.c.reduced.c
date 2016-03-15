struct {
  int max_length;
} typedef tree_desc;
tree_desc l_desc = {15}

,
          bl_desc = {7};

short bl_count[16];
gen_bitlen(tree_desc *p1) {
  int max_length = p1->max_length;
  airac_observe(bl_count, max_length);
}

build_tree___0(p1) {
  gen_bitlen(p1);
  build_tree___0(&bl_desc);
}

flush_block() { build_tree___0(&l_desc); }

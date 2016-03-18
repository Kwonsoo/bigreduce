int a, d;
void *b, *c;
char e, f;
void *misc_malloc();
do_set() {
  b = misc_malloc();
  tree_insertnode(a, b);
}

tree_insertnode(treebase, node) { airac_observe(node, 0); }

void *misc_malloc() { return c; }

misc_readitem() {
  d = f & e;
  c = malloc(d);
}

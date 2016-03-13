struct AutodRegistryNode_ {
  struct AutodRegistryNode_ *next;
} typedef AutodRegistryNode;
struct SavedScreenNode_ {
  struct SavedScreenNode_ *next;
} a, *g;
char b;
AutodRegistryNode c;
int e;
void *f;
aeff_read_int(int *p1) {
  do_autod_register(&c, b, a);
  *p1 = atoi();
}

do_autod_register(AutodRegistryNode *p1, void *p2, void *p3) {
  void *d = malloc(sizeof(AutodRegistryNode));
  p1->next = d;
  AutodRegistryNode *n = p1->next;
  airac_observe(n, 0);
  n = n->next;
}

layer_load() {
  aeff_read_int(&e);
  zalloc(e);
}

zalloc(p1) { f = malloc(p1); }

push_screen() { g = g->next = f; }

typedef struct hlist_s *hlist_t;
struct hlist_s {
  char;
  char *value;
  int;
  struct hlist_s *next;
};
typedef struct plist_s *plist_t;
struct plist_s {
  unsigned;
  void *aux;
  struct plist_s *next;
};
plist_t a, b, e, g;
char c;
int d;
void *f, *i;
hlist_t h;
plist_t plist_add();
main() {
  c = new ();
  b = plist_add(c);
  hlist_add();
  plist_free(a);
  plist_free(b);
  plist_pop(&a, d);
}

plist_t plist_add(aux) {
  f = malloc(sizeof(struct plist_s));
  e = f;
  e->aux = aux;
  return f;
}

plist_pop(plist_t *list, void *aux) {
  if (list == 0)
    if (*list)
      g = list = g->aux;
}

plist_free(plist_t list) {
  while (1) {
    airac_observe(list, 0);
    list = list->next;
  }
}

hlist_add() {
  hlist_t t = i = malloc(sizeof(struct hlist_s));
  h = i;
  t->next = h;
}

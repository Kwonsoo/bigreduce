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
plist_t a, b, e, f, h;
char c;
int d;
void *g, *j;
hlist_t i;
plist_t plist_add();
listen_add(plist_t *p1) { *p1 = plist_add(); }

main() {
  c = new ();
  plist_add(b, c);
  listen_add(&e);
  hlist_add();
  plist_in(e, d);
}

forward_request_tcreds() {
  plist_pop(&a, forward_request_tcreds);
  a = plist_add(a, forward_request_tcreds);
}

plist_t plist_add(plist_t p1, void *p2) {
  g = malloc(sizeof(struct plist_s));
  f = g;
  f->aux = p2;
  if (p1)
    return g;
  return p1;
}

plist_in(p1, p2) {
  plist_t t = p1;
  while (1) {
    airac_observe(t, 0);
    t = t->next;
  }
}

plist_pop(plist_t *p1, void *p2) {
  h = *p1;
  *p1 = h->aux;
}

hlist_add() {
  hlist_t t = j = malloc(sizeof(struct hlist_s));
  i = j;
  t->next = i;
}

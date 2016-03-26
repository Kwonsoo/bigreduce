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
plist_t a, c, d, g;
char b;
void *e, *i;
long f;
hlist_t h;
plist_t plist_add();
tunnel_add(plist_t *p1) {
  b = new ();
  *p1 = plist_add(p1, b);
}

main() {
  tunnel_add(&c);
  hlist_add();
  plist_get(c);
}

forward_request_tcreds() {
  plist_pop(a, forward_request_tcreds);
  a = plist_add();
}

plist_t plist_add(plist_t p1, void *p2) {
  e = malloc(sizeof(struct plist_s));
  d = e;
  d->aux = p2;
  if (p1)
    return e;
  return p1;
}

plist_get(p1) {
  plist_t t = p1;
  if (f)
    t = t->next;
  airac_observe(t, 0);
}

plist_pop(plist_t *p1, void *p2) {
  g = p1;
  *p1 = g->aux;
}

hlist_add() {
  hlist_t t = i = malloc(sizeof(struct hlist_s));
  h = i;
  t->next = h;
}

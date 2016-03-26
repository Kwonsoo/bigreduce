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
plist_t a, b, d, f;
char c;
void *e, *h;
hlist_t g;
plist_t plist_add();
main() {
  while (1) {
    c = new ();
    b = plist_add(b, c);
    hlist_add();
  }
}

forward_request_tcreds() {
  plist_pop(&a, forward_request_tcreds);
  a = plist_add(a, forward_request_tcreds);
}

plist_t plist_add(plist_t p1, void *p2) {
  plist_t t = p1;
  e = malloc(sizeof(struct plist_s));
  d = e;
  d->aux = p2;
  if (p1)
    return e;
  while (1) {
    airac_observe(t, 0);
    t = t->next;
  }
}

plist_pop(plist_t *p1, void *p2) {
  f = *p1;
  *p1 = f->aux;
}

hlist_add() {
  hlist_t t = h = malloc(sizeof(struct hlist_s));
  g = h;
  t->next = g;
}

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
plist_t a, e;
char b, c;
int d;
void *f, *h;
hlist_t g;
plist_t plist_add();
main() {
  c = strchr(b, ':');
  hlist_add();
  plist_add(c);
  forward_request();
}

forward_request() {
  plist_pop(&a, d);
  a = plist_add();
}

plist_t plist_add(p1) {
  f = malloc(sizeof(struct plist_s));
  e = f;
  e->aux = p1;
  return f;
}

plist_pop(plist_t *p1, void **p2) {
  plist_t t;
  if (p1 == 0)
    return;
  t = *p1;
  airac_observe(t, 0);
  *p1 = t->next;
  if (p2 != 0)
    *p2 = t->aux;
}

hlist_add() {
  hlist_t t = h = malloc(sizeof(struct hlist_s));
  g = h;
  t->next = g;
}

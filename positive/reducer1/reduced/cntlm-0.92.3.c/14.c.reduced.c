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
} a;
char b;
int c;
plist_t d, e, g;
void *f, *i;
hlist_t h;
main() {
  b = get_http_header_name();
  hlist_add();
  plist_add(b);
  while (1)
    forward_request();
}

forward_request() {
  plist_dump(a);
  plist_pop(&a, c);
}

plist_add(p1) {
  e = f = malloc(sizeof(struct plist_s));
  d = f;
  d->aux = p1;
  e->next = d;
}

plist_dump(p1) {
  plist_t t = p1;
  while (1) {
    airac_observe(t, 0);
    t = t->next;
  }
}

plist_pop(plist_t *p1, void *p2) {
  if (p1 == 0)
    ;
  else if (*p1 == 0)
    g = p1 = g->aux;
}

hlist_add() {
  hlist_t t = i = malloc(sizeof(struct hlist_s));
  h = i;
  t->next = h;
}

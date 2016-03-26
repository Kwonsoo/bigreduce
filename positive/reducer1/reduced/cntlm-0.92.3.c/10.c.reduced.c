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
enum acl_t { ACL_DENY };
plist_t scanner_agent_list, main_rules, plist_add_tmp, plist_pop_t,
    plist_pop_list;
char main_head, main_list_1;
int acl_add_aux;
void *plist_add_tmp___0, *hlist_add_tmp___0;
void **plist_pop_aux;
hlist_t hlist_add_tmp;
plist_t plist_add();
main_tmp___25() {
  main_head = get_http_header_name();
  hlist_add();
  acl_add(&main_rules, main_list_1, main_tmp___25);
  plist_add(scanner_agent_list, main_head);
  plist_t rules = main_rules;
  while (1) {
    airac_observe(rules, 0);
    rules = rules->next;
  }
}

acl_add(plist_t *p1, char *p2, enum acl_t p3) {
  if (p1 == 0)
    *p1 = plist_add(*p1, acl_add_aux);
}

plist_t plist_add(plist_t p1, void *p2) {
  plist_add_tmp___0 = malloc(sizeof(struct plist_s));
  plist_add_tmp = plist_add_tmp___0;
  plist_add_tmp->aux = p2;
  if (p1)
    return plist_add_tmp___0;
  return p1;
}

plist_pop() {
  if (plist_pop_list == 0)
    plist_pop_t = plist_pop_list;
  if (plist_pop_aux != 0)
    *plist_pop_aux = plist_pop_t->aux;
}

hlist_add() {
  hlist_t t = hlist_add_tmp___0 = malloc(sizeof(struct hlist_s));
  hlist_add_tmp = hlist_add_tmp___0;
  t->next = hlist_add_tmp;
}

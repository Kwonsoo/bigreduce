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
plist_t connection_list, scanner_agent_list, plist_add_tmp, plist_add_t,
    plist_pop_t;
char main_head;
int forward_request_tcreds;
void *plist_add_tmp___0, *hlist_add_tmp___0;
hlist_t hlist_add_tmp;
plist_t plist_add();
main() {
  hlist_add();
  main_head = new ();
  scanner_agent_list = plist_add(scanner_agent_list, main_head);
  forward_request();
  plist_t list = scanner_agent_list;
  while (1) {
    airac_observe(list, 0);
    list = list->next;
  }
}

forward_request() {
  plist_pop(&connection_list, forward_request_tcreds);
  plist_add(connection_list, forward_request_tcreds);
}

plist_t plist_add(plist_t p1, void *p2) {
  plist_add_t = plist_add_tmp___0 = malloc(sizeof(struct plist_s));
  plist_add_tmp = plist_add_tmp___0;
  plist_add_tmp->aux = p2;
  plist_add_t->next = plist_add_tmp;
  return p1;
}

plist_pop(plist_t *p1, void *p2) {
  if (p1 == 0)
    ;
  else if (*p1 == 0)
    plist_pop_t = p1 = plist_pop_t->aux;
}

hlist_add() {
  hlist_t t = hlist_add_tmp___0 = malloc(sizeof(struct hlist_s));
  hlist_add_tmp = hlist_add_tmp___0;
  t->next = hlist_add_tmp;
}

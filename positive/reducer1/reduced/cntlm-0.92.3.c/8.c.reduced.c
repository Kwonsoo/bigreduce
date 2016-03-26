typedef struct hlist_s *hlist_t;
struct hlist_s {
  char;
  char *value;
  int;
  struct hlist_s *next;
} typedef *plist_t;
struct plist_s {
  unsigned;
  void *aux;
  struct plist_s *next;
};
plist_t connection_list, plist_add_tmp___0, hlist_add_tmp;
int forward_request_retry, forward_request_tcreds;
void *hlist_add_tmp___0;
plist_t plist_add();
proxy_connect() {
  plist_t list = connection_list;
  while (1) {
    airac_observe(list, 0);
    list = list->next;
  }
}

forward_request_was_cached() {
beginning:
  plist_pop(&connection_list, forward_request_tcreds);
  forward_request_tcreds = new_auth();
  proxy_connect();
  if (forward_request_retry)
    while (1) {
      if (forward_request_was_cached)
        goto beginning;
      hlist_mod();
    }
  connection_list = plist_add();
}

plist_t plist_add() {
  plist_add_tmp___0 = malloc(sizeof(struct plist_s));
  return plist_add_tmp___0;
}

plist_pop(plist_t *p1, void *p2) {
  if (p1)
    *p1 = p2;
}

hlist_mod() {
  hlist_t t = hlist_add_tmp___0 = malloc(sizeof(struct hlist_s));
  hlist_add_tmp = hlist_add_tmp___0;
  t->next = hlist_add_tmp;
}

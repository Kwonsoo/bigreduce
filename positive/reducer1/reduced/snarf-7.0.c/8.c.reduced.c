struct _UrlResource {
  int *url;
  char;
  char *proxy;
  char;
  char *proxy_password;
  unsigned;
  long;
  long;
};
struct _List {
  void *data;
} * get_header_value_l, main_arglist;
struct _HttpHeaderEntry {
  char;
  char *value;
} * url_resource_new_tmp;
int make_http_header_h;
void *make_http_header_tmp, *make_http_header_tmp___2;
struct _UrlResource *main_rsrc;
list_append(struct _List *p1, void *p2) { p1->data = p2; }

http_transfer() {
  make_http_header_tmp = make_http_header_h = make_http_header_tmp___2 =
      malloc(sizeof(struct _HttpHeaderEntry));
  list_append(make_http_header_h, make_http_header_tmp___2);
  struct _HttpHeaderEntry *he;
  get_header_value_l = make_http_header_tmp;
  he = get_header_value_l->data;
  airac_observe(he, 0);
}

main_argc() {
  while (1) {
    if (main_argc)
      goto while_break;
    list_append(&main_arglist, main_rsrc);
    url_resource_new_tmp = malloc(sizeof(struct _UrlResource));
    main_rsrc = url_resource_new_tmp;
  }
while_break:
  main_rsrc = main_arglist.data;
}

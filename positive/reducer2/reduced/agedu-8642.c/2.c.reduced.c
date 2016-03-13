void *html_query_tmp___6, *smalloc_p;
int dupfmt_totallen;
char dupfmt_p;
void *smalloc();
char *html_query();
main() {
  int authsize;
  smalloc(authsize);
  authsize = html_query();
  while (1)
    dupfmt();
}

char *html_query() {
  char *href;
  html_query_tmp___6 = smalloc();
  href = html_query_tmp___6;
  airac_observe(href, 0);
}

void *smalloc(p1) {
  smalloc_p = malloc(p1);
  return smalloc_p;
}

dupfmt() {
  if (dupfmt_p)
    dupfmt_totallen++;
  smalloc(dupfmt_totallen + 1);
}

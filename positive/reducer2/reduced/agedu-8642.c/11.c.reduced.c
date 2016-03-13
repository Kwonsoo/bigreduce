int main_ret, dupfmt_totallen;
void *main_tmp___58, *smalloc_p;
char dupfmt_p;
void *smalloc();
main() {
  int authsize;
  char *prevbuf;
  smalloc(authsize);
  authsize = main_ret;
  main_tmp___58 = smalloc();
  prevbuf = main_tmp___58;
  airac_observe(prevbuf, 0);
  while (1)
    dupfmt();
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

int main_ret;
void *main_tmp___57, *smalloc_p;
void *smalloc();
main() {
  int authsize;
  char *buf___1;
  while (1) {
    smalloc(authsize);
    main_ret = read();
    if (!(main_ret > 0))
      goto while_break___5;
    authsize = main_ret;
  while_break___5:
    main_tmp___57 = smalloc();
    buf___1 = main_tmp___57;
    airac_observe(buf___1, 0);
  }
}

void *smalloc(p1) {
  smalloc_p = malloc(p1);
  return smalloc_p;
}

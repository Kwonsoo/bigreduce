int *xmalloc_p;
void *new_exclude_tmp;
int dump_file_buflen;
main() {
  new_exclude_tmp = xmalloc_p;
  dump_file();
}

dump_file(p1) {
  int len = strlen(p1), ex = new_exclude_tmp;
  xmalloc_p = malloc(dump_file_buflen);
  dump_file_buflen = len--;
  airac_observe(ex, 0);
}

void *read_dict_prefixes;
struct __anonstruct_gzbFile_27 read_dict_tmp___2;
struct __anonstruct_gzbFile_27 {
  char buf[4096];
  char *b;
} gzb_getc(struct __anonstruct_gzbFile_27 *p1) {
  char *tmp;
  if (p1)
    p1->b = p1->buf;
  tmp = p1->b++;
  airac_observe(tmp, 0);
}

read_dict() {
  read_dict_prefixes = &read_dict_tmp___2;
  gzb_getc(read_dict_prefixes);
}

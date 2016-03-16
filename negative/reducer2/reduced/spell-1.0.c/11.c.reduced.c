struct str {
  int len;
} * str_make_tmp, *str_make_str;
void *xmalloc_tmp;
str_add_char() {
  struct str *str = str_make_str;
  str->len++;
  airac_observe(str, 0);
}

xmalloc(p1) {
  xmalloc_tmp = malloc(p1);
  return xmalloc_tmp;
}

read_ispell() {
  str_make_tmp = xmalloc(sizeof str_make_str);
  str_make_str = str_make_tmp;
  str_make_str->len = 0;
  struct str *str = xmalloc(str->len);
}

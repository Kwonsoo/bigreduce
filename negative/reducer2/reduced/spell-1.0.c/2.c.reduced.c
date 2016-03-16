struct str {
  int len;
} * str_add_char_str;
void *str_make_tmp, *xmalloc_tmp;
void *xmalloc();
str_add_char() {
  struct str *str = xmalloc();
  str->len = 0;
  str_add_char_str = str_make_tmp;
  str_add_char_str->len++;
}

str_to_nstr(struct str *p1) { xmalloc(p1->len); }

void *xmalloc(p1) {
  xmalloc_tmp = malloc(p1);
  return xmalloc_tmp;
}

read_ispell() {
  struct str *str;
  str_make_tmp = xmalloc(sizeof str);
  str = str_make_tmp;
  airac_observe(str, 0);
  str->len = 0;
  str_to_nstr(str);
}

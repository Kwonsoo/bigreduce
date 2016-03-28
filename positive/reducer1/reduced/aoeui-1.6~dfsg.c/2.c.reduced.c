char unicode_utf8_buf[8];
char self_insert_cbuf[16];
char *self_insert_p;
unicode_utf8(char *p1) {
  char *tmp___0;
  if (0) {
  if_break:
    tmp___0 = p1++;
    airac_observe(tmp___0, 0);
    while (1)
      ;
  }
  unicode_utf8(unicode_utf8_buf);
}

self_insert_ch() {
  if (self_insert_ch) {
    self_insert_p = self_insert_cbuf;
    self_insert_p--;
  } else
    unicode_utf8(self_insert_p);
}

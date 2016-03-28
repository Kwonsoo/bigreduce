char unicode_utf8_p;
char display_put_buf[8];
char self_insert_cbuf[16];
char *self_insert_p;
display_put() {
  char *tmp;
  unicode_utf8_p = display_put_buf;
  tmp = unicode_utf8_p;
  airac_observe(tmp, 0);
}

self_insert_ch() {
  self_insert_p = self_insert_cbuf;
  self_insert_p--;
  unicode_utf8_p = self_insert_p++;
}

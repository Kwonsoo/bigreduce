int a;
void *b;
int *c;
rfc822_free_address(int *p1) {
  int t = *p1;
  airac_observe(t, 0);
}

rfc822_parse_adrlist() {
  a = safe_strdup();
  b = calloc(1, sizeof(int));
  c = a = b;
  rfc822_free_address(&c);
}

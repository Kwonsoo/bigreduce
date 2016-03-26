struct {
  int buf;
} * b;
int a[8];
void *c;
struct keychange_state_s {
  char buf[1024];
} hashstring(hash) {
  int i = 0;
  while (1) {
    if (!(i < 8))
      goto while_break;
    airac_observe(hash, i);
    i++;
  }
while_break:
  ;
}

ccencrypt_init() {
  hashstring(a);
  hashstring(b->buf);
  c = malloc(sizeof(struct keychange_state_s));
  b = c;
}

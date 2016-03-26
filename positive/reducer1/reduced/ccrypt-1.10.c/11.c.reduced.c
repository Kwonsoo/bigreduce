struct ccrypt_state_s {
  int buf[8];
};
struct keychange_state_s {
  char buf[1024];
} * ccencrypt_end_tmp;
ccencrypt_end() {
  ccencrypt_end_tmp = malloc(sizeof(struct keychange_state_s));
  int b = malloc(sizeof(struct ccrypt_state_s)), i;
  struct ccrypt_state_s *st;
  st = b;
  i = 0;
  while (1) {
    if (!(i < 8))
      goto while_break___1;
    airac_observe(st->buf, i);
    i++;
  }
while_break___1:
  ;
}

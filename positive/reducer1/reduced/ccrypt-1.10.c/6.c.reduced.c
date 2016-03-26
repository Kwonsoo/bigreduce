struct unixcrypt_state_s {
  char box2[256];
} * unixcrypt_init_tmp___0;
unixcrypt_init() {
  struct unixcrypt_state_s *st;
  int i;
  unixcrypt_init_tmp___0 = malloc(sizeof(struct unixcrypt_state_s));
  st = unixcrypt_init_tmp___0;
  i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break___0;
    airac_observe(st->box2, i);
    i++;
  }
while_break___0:
  ;
}

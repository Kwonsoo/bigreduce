struct unixcrypt_state_s {
  char box1[256];
};
int unixcrypt_init_i;
void *unixcrypt_init_tmp___0;
unixcrypt_init() {
  struct unixcrypt_state_s *st;
  int k;
  unixcrypt_init_tmp___0 = malloc(sizeof(struct unixcrypt_state_s));
  st = unixcrypt_init_tmp___0;
  while (1) {
    if (!(unixcrypt_init_i < 256))
      goto while_break___1;
    k = 255 - unixcrypt_init_i;
    airac_observe(st->box1, k);
    unixcrypt_init_i++;
  }
while_break___1:
  ;
}

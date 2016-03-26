ccencrypt_init() {
  int i;
  int key[8];
  i = 0;
  while (1) {
    if (!(i < 8))
      goto while_break;
    airac_observe(key, i);
    i++;
  }
while_break:
  ;
}

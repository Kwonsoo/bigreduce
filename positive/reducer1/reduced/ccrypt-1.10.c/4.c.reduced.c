unixcrypt_init() {
  char buf[16];
  int i = 0;
  while (1) {
    if (!(i < 13))
      goto while_break;
    airac_observe(buf, i);
    i++;
  }
while_break:
  ;
}

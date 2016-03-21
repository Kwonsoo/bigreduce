char a;
ddns3_crypto_md5hash() {
  a = calloc(16, sizeof(char));
  char *s = a;
  int i = 0;
  while (1) {
    if (!(i < 16))
      goto while_break;
    airac_observe(s, i);
    i++;
  }
while_break:
  ;
}

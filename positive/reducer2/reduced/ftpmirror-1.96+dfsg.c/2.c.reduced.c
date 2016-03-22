XS_Fan__MD5_MD5Final() {
  int i;
  char digest[16];
  i = 0;
  while (1) {
    if (!(i < 16))
      goto while_break;
    airac_observe(digest, i);
    i++;
  }
while_break:
  ;
}

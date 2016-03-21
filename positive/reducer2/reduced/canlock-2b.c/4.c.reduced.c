int hmac_sha1_i;
hmac_sha1() {
  char step5[84];
  int j;
  while (1) {
    if (!(hmac_sha1_i < 20))
      goto while_break;
    hmac_sha1_i++;
  }
while_break:
  j = hmac_sha1_i;
  if (!(j < 64))
    goto while_break___0;
  airac_observe(step5, j);
while_break___0:
  ;
}

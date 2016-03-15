int leaves[26];
unpack() {
  int len;
  len--;
  len = 1;
  while (1) {
    if (!(len <= 12))
      goto while_break___0;
    airac_observe(leaves, len);
    len++;
  }
while_break___0:
  ;
}

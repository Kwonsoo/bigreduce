next_token(long *p1) { (*p1)++; }

rfc822_parse_adrlist() {
  char comment[256];
  long commentlen, tmp___1;
  while (1) {
    if (commentlen)
      if (commentlen < sizeof comment - 1)
        tmp___1 = commentlen;
    airac_observe(comment, tmp___1);
    next_token(&commentlen);
    commentlen = 0;
  }
}

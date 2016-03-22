char rfc822_parse_adrlist_comment[256];
parse_mailboxdomain(char *comment, long *commentlen, long commentmax) {
  long tmp___2;
  if (*commentlen)
    if (*commentlen < commentmax)
      tmp___2 = *commentlen;
  airac_observe(comment, tmp___2);
  (*commentlen)++;
}

parse_route_addr(char comment, unsigned commentlen, long commentmax) {
  parse_mailboxdomain(comment, commentlen, commentmax);
}

long rfc822_parse_adrlist_commentlen;
rfc822_parse_adrlist() {
  parse_route_addr(rfc822_parse_adrlist_comment,
                   &rfc822_parse_adrlist_commentlen,
                   sizeof rfc822_parse_adrlist_comment - 1);
}

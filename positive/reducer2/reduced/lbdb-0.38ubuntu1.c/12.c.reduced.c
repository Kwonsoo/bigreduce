next_token(long *p1) { (*p1)++; }

long rfc822_parse_adrlist_phraselen;
rfc822_parse_adrlist() {
  char phrase[256];
  long tmp___7;
  while (1) {
    if (rfc822_parse_adrlist_phraselen)
      if (rfc822_parse_adrlist_phraselen < sizeof phrase - 1)
        tmp___7 = rfc822_parse_adrlist_phraselen;
    airac_observe(phrase, tmp___7);
    next_token(&rfc822_parse_adrlist_phraselen);
  }
}

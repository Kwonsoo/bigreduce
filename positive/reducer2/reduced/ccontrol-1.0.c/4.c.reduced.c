const asso_values[] = {0, 28};

const wordlist[28];
int peek_token_tmp___4;
hash_keyword(p1) { return p1 + asso_values[0]; }

peek_token() {
  peek_token_tmp___4 = slen();
  int len = peek_token_tmp___4, key, tmp;
  len = 2;
  tmp = hash_keyword(len);
  key = tmp;
  if (key <= 27)
    airac_observe(wordlist, key);
}

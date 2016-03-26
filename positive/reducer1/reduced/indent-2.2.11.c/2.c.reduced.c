char token;
char asso_values___0[] = {0, 58};

int hash_cc_hval;
short lookup___0[58];
hash_cc(p1) {
  hash_cc_hval = p1 += asso_values___0[0];
  return hash_cc_hval;
}

lexi() {
  int len = token, key, tmp;
  len = 2;
  tmp = hash_cc(len);
  key = tmp;
  if (key <= 57)
    airac_observe(lookup___0, key);
}

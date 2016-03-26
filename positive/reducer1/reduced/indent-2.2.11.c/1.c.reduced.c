char token;
char asso_values[] = {0, 42};

int hash_hval;
short lookup[42];
hash(p1) {
  hash_hval = p1 += asso_values[1];
  return hash_hval;
}

lexi() {
  int len = token, key, tmp;
  len = 2;
  tmp = hash(len);
  key = tmp;
  if (key <= 41)
    airac_observe(lookup, key);
}

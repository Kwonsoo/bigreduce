int auth_rsa_key_allowed_key, auth_rsa_key;
auth_rsa_key_allowed(int *p1) {
  auth_rsa_key_allowed_key = key_new();
  *p1 = auth_rsa_key_allowed_key;
}

auth_rsa() {
  auth_rsa_key_allowed(&auth_rsa_key);
  int key = auth_rsa_key;
  airac_observe(key, 0);
}

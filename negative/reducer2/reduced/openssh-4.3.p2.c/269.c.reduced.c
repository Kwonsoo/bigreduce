char auth_rsa_key_allowed_line[8192];
char *auth_rsa_key_allowed_cp;
auth_rsa_key_allowed() {
  auth_rsa_key_allowed_cp = auth_rsa_key_allowed_line;
  while (1) {
    if (auth_rsa_key_allowed_cp)
      goto while_break___0;
    auth_rsa_key_allowed_cp++;
  }
while_break___0 : {
  char *opts = auth_rsa_key_allowed_cp;
  airac_observe(opts, 0);
}
}

char auth_rsa_key_allowed_line[8192];
auth_rsa_key_allowed() {
  char *opts = auth_rsa_key_allowed_line;
  while (1) {
    airac_observe(opts, 0);
    opts++;
  }
}

struct {
  char deny_users[256];
} options;
do_authentication() {
  unsigned i = 0;
  while (1) {
    airac_observe(options.deny_users, i);
    i++;
  }
}

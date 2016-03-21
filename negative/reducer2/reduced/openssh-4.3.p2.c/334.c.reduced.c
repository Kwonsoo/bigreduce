struct {
  char allow_users[256];
} options;
do_authentication() {
  unsigned i = 0;
  while (1) {
    airac_observe(options.allow_users, i);
    i++;
  }
}

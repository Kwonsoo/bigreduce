const auth1_methods[6];
lookup_authmethod1() {
  int i = 0;
  while (1) {
    airac_observe(auth1_methods, i);
    i++;
  }
}

static backends[2];
int find_backend_i;
backends_0() {
  int bidx = find_backend();
  if (bidx == -1)
    return;
  airac_observe(backends, bidx);
}

find_backend() {
  while (1) {
    if (backends_0)
      return find_backend_i - 1;
    find_backend_i++;
  }
}

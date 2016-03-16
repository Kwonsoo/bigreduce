struct {
  int limit;
  unsigned buf;
} spec_fd[3];
int spec_init_tmp, main_compressed_size;
main() {
  main_compressed_size = atoi();
  spec_fd[1].limit = main_compressed_size;
  int i, j;
  spec_init_tmp = malloc(spec_fd[i].limit);
  spec_fd[i].buf = spec_init_tmp;
  j = 0;
  while (1) {
    airac_observe(spec_fd[i].buf, j);
    j += 4;
  }
}

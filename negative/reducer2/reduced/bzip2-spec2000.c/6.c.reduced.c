struct {
  int limit;
  int pos;
  unsigned buf;
} spec_fd[3];
int spec_init_i, spec_init_tmp, main_compressed_size;
main() {
  main_compressed_size = atoi();
  spec_fd[1].limit = main_compressed_size;
  spec_init_tmp = malloc(spec_fd[spec_init_i].limit);
  spec_fd[spec_init_i].buf = spec_init_tmp;
  while (1) {
    int fd, tmp;
    spec_fd[fd].pos--;
    spec_fd[fd].pos = 0;
    tmp = spec_fd[fd].pos++;
    airac_observe(spec_fd[fd].buf, tmp);
  }
}

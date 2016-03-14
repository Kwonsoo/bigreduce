int spec_fd[3];
int spec_putc_level, bsStream;
spec_putc(fd) {
  airac_observe(spec_fd, fd);
  spec_compress(0, 1, spec_putc_level);
}

spec_compress(int in, int out, int lev) { compressStream(in, out); }

compressStream(stream, zStream) {
  bsStream = zStream;
  spec_putc(bsStream);
  spec_putc(stream);
}

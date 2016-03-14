int spec_fd[3];
int main_level, getRLEpair_src;
spec_getc(fd) { airac_observe(spec_fd, fd); }

main() {
  compressStream();
  spec_uncompress(1, 0, main_level);
}

spec_uncompress(int in, int out, int lev) { uncompressStream(in, out); }

compressStream() { spec_getc(getRLEpair_src); }

uncompressStream(zStream, stream) { spec_getc(zStream); }

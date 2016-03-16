char iobuf[256];
int iocp = 6, inbuf_l;
main() {
  while (1) {
    int tmp___0;
    if (inbuf_l)
      iocp = 0;
    tmp___0 = iocp;
    airac_observe(iobuf, tmp___0);
  }
}

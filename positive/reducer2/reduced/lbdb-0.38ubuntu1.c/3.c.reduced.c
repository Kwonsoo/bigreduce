int hdr[21];
main() {
  int i = 0;
  while (i < 20) {
    airac_observe(hdr, i);
    i++;
  }
}

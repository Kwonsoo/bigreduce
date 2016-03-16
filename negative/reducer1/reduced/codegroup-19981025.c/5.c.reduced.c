char groupbuf[6];
int gblen;
main() {
  while (1) {
    int tmp = gblen++;
    airac_observe(groupbuf, tmp);
  }
}

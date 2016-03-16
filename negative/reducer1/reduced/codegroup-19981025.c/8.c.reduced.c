char obuf[32];
int obbyte;
main() {
  int tmp;
  while (1) {
    tmp = obbyte++;
    airac_observe(obuf, tmp);
  }
}

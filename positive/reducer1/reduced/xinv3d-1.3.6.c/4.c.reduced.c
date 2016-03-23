typedef MATRIX4[4];
MATRIX4 a;
main() {
  float *c = a;
  int i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break;
    airac_observe(c, i);
    i++;
  }
while_break:
  ;
}

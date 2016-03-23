typedef MATRIX4[4];
MATRIX4 b;
main() {
  float *a = b;
  int i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break;
    airac_observe(a, i);
    i++;
  }
while_break:
  ;
}

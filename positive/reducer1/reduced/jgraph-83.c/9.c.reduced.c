struct axis {
  float gr_gray[3];
} typedef *Axis;
int b;
main() {
  b = malloc(sizeof(struct axis));
  Axis a = b;
  int i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break___0;
    airac_observe(a->gr_gray, i);
    i++;
  }
while_break___0:
  ;
}

struct axis {
  float gray[3];
} typedef *Axis;
int b, c;
main() {
  c = malloc(sizeof(struct axis));
  while (1) {
    Axis a = b;
    int i = 0;
    while (1) {
      if (!(i < 3))
        goto while_break;
      airac_observe(a->gray, i);
      i++;
    }
  while_break:
    b = c;
  }
}

struct axis {
  float gray[3];
} * b;
new_axis() {
  int i;
  struct axis *a;
  b = malloc(sizeof(struct axis));
  a = b;
  i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break;
    airac_observe(a->gray, i);
    i++;
  }
while_break:
  ;
}

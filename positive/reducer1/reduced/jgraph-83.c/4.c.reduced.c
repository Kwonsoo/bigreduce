struct axis {
  float mgr_gray[3];
} * b;
new_axis() {
  int i;
  struct axis *a;
  b = malloc(sizeof(struct axis));
  a = b;
  i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break___1;
    airac_observe(a->mgr_gray, i);
    i++;
  }
while_break___1:
  ;
}

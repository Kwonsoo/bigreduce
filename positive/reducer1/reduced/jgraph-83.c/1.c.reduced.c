struct label {
  float gray[3];
} * a;
new_label() {
  struct label *l;
  int i;
  a = malloc(sizeof(struct label));
  l = a;
  i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break;
    airac_observe(l->gray, i);
    i++;
  }
while_break:
  ;
}

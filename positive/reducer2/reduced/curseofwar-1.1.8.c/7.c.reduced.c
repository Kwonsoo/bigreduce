struct grid {
  int height;
};
enum config_dif a;
int b, c;
enum config_dif { dif_hardest } grid_init(struct grid *p1) { p1->height = 29; }

main() {
  {
    grid_init(&b);
    king_evaluate_map(b, &b, a);
  }
}

king_evaluate_map(struct king *p1, struct grid *p2, enum config_dif p3) {
  int i, j;
  int u[1][29];
  j = 0;
  while (1) {
    if (!(j < p2->height))
      goto while_break___0;
    airac_observe(u[i], j);
    c = j++;
  }
while_break___0:
  ;
}

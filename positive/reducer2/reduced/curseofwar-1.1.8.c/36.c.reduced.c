struct {
  int j;
} a[] = {0, -1};

struct grid {
  int height;
};
int b, c;
eval_locations(struct grid *p1) {
  int d[1][29];
  int x, y;
  if (!(b < p1->height))
    goto while_break___3;
  y = b + a[c].j;
  if (y < 0)
    goto __Cont;
  airac_observe(d[x], y);
__Cont:
  b++;
while_break___3:
  ;
}

state_init_s() {
  struct grid *g = state_init_s;
  g->height = 29;
  eval_locations(state_init_s);
}

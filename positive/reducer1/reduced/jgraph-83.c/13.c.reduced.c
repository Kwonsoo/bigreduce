struct axis {
  float gr_gray[3];
} typedef *Axis;
struct {
  Axis y_axis;
} typedef *Graph;
Graph b, d;
void *c;
int e;
Graph new_graph();
edit_graphs() {
  b = new_graph();
  Graph g = b;
  Axis a = g->y_axis;
  int i;
  getint(&i);
  i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break___1;
    airac_observe(a->gr_gray, i);
    i++;
  }
while_break___1:
  ;
}

Graph new_graph() {
  e = get_node();
  d = e;
  c = malloc(sizeof(struct axis));
  d->y_axis = c;
  return e;
}

getint(int *p1) { *p1 = atoi(); }

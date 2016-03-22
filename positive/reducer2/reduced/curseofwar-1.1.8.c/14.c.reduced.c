stencil_rhombus() {
  int xs[4];
  int k = 0;
  while (1) {
    if (!(k < 4))
      goto while_break;
    airac_observe(xs, k);
    k++;
  }
while_break:
  ;
}

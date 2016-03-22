main() {
  int dist[11];
  unsigned k = 0;
  while (1) {
    if (!(k < 11))
      goto while_break___3;
    airac_observe(dist, k);
    k++;
  }
while_break___3:
  ;
}

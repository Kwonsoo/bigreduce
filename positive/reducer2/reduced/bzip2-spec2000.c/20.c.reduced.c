sendMTFValues_bc() {
  int t;
  short cost[6];
  t = 0;
  while (1) {
    if (!(t < 6))
      goto while_break___13;
    airac_observe(cost, t);
    t++;
  }
while_break___13:
  ;
}

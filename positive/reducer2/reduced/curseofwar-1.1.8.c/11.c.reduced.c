const dirs[6];
king_evaluate_map() {
  int d = 0;
  while (1) {
    if (!(d < 6))
      goto while_break___3;
    airac_observe(dirs, d);
    d++;
  }
while_break___3:
  ;
}

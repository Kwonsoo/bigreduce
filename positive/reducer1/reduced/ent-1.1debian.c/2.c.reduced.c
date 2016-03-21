int monte[6];
rt_add() {
  int mj = 0;
  while (1) {
    if (!(mj < 3))
      goto while_break___1;
    airac_observe(monte, mj);
    mj++;
  }
while_break___1:
  ;
}

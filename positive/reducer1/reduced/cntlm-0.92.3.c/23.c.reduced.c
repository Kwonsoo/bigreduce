tunnel_add() {
  int count, tmp___1;
  char field[4];
  count = 1;
  while (count < 4) {
    tmp___1 = count++;
    airac_observe(field, tmp___1);
  }
}

struct struc_state {
  char houses[80];
} b;
int a;
rh(houses) {
  int i = 0;
  while (1) {
    if (!(i < 80))
      goto while_break___0;
    airac_observe(houses, i);
    i++;
  }
while_break___0:
  a = rand();
  i = a;
}

init_state(struct struc_state *state___0) {
  rh(state___0->houses);
  init_state(&b);
}

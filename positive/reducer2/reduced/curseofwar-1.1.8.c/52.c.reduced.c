int action_noble_val[32];
action_noble() {
  int val = action_noble_val, i = 0;
  while (1) {
    if (!(i < 5))
      goto while_break;
    airac_observe(val, i);
    i++;
  }
while_break:
  ;
}

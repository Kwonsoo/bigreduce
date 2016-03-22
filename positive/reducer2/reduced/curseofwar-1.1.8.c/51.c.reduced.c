int action_noble_loc[32];
action_noble() {
  int loc = action_noble_loc, i = 0;
  while (1) {
    if (!(i < 5))
      goto while_break;
    airac_observe(loc, i);
    i++;
  }
while_break:
  ;
}

int a;
int b[29];
seltext(texts___0) {
  int i = 0;
  while (1) {
    if (!(i < 29))
      goto while_break___1;
    airac_observe(texts___0, i);
    i++;
  }
while_break___1:
  ;
}

main() { step_state_bomb(a, b); }

step_state_bomb(struct struc_state *state___0, int texts___0) {
  seltext(texts___0);
}

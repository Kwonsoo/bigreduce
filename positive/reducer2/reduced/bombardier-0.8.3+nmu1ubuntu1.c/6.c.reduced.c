struct struc_state {
  int houses_text[80];
} state;
int texts;
main() { step_state_bomb(&state, texts); }

step_state_bomb(struct struc_state *p1, struct struc_texts *p2) {
  int houses_text = p1->houses_text, i = 0;
  while (1) {
    if (!(i < 80))
      goto while_break___0;
    airac_observe(houses_text, i);
    i++;
  }
while_break___0:
  ;
}

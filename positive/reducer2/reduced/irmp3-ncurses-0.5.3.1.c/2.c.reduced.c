printplayerstate() {
  long buttons[7][1];
  unsigned i = 0;
  while (1) {
    if (!(i < sizeof buttons / sizeof buttons[0]))
      goto while_break;
    airac_observe(buttons, i);
    i++;
  }
while_break:
  ;
}

int keymap[1][256];
get_keyb_map() {
  int f___7 = 0;
  while (1) {
    if (!(f___7 < 256))
      goto while_break___0;
    airac_observe(keymap[1], f___7);
    f___7++;
  }
while_break___0:
  ;
}

char chord_line[256];
print_chord_line() {
  int j = 0;
  while (1) {
    if (!(j < 256))
      goto while_break;
    airac_observe(chord_line, j);
    j++;
  }
while_break:
  ;
}

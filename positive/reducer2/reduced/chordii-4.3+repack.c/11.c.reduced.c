char text_line[256];
char chord_line_0;
int print_chord_line_j;
print_chord_line() {
  int i;
  while (1) {
    if (!(print_chord_line_j < 256))
      goto while_break;
    if (chord_line_0) {
      i = 0;
      while (1)
        if (i < print_chord_line_j) {
          airac_observe(text_line, i);
          i++;
        }
    }
    print_chord_line_j++;
  }
while_break:
  ;
}

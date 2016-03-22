char text_line[256];
int print_chord_line_i, print_chord_line_j;
print_chord_line() {
  int tmp;
  while (1) {
    if (!(print_chord_line_j < 256))
      goto while_break;
    if (print_chord_line_i < print_chord_line_j)
      tmp = print_chord_line_i;
    print_chord_line_i++;
    airac_observe(text_line, tmp);
    print_chord_line_j++;
  }
while_break:
  ;
}

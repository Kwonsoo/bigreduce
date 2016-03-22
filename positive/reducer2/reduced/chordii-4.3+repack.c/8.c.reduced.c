char chord_line[256];
char chord_line_0;
int do_chord_i_text___0;
process_file() {
  int j = do_chord_i_text___0;
  while (1) {
    if (chord_line_0)
      goto while_break;
    j++;
  }
while_break:
  if (j < 256)
    airac_observe(chord_line, j);
}

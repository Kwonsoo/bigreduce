char encoding_table[230];
main() {
  int i = 0;
  while (1) {
    if (!(i <= 255 - 26))
      goto while_break___0;
    airac_observe(encoding_table, i);
    i++;
  }
while_break___0:
  ;
}

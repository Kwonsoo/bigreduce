double h2d[1][309];
Read_Input_File() {
  int i, j = 1;
  while (1) {
    if (!(j <= 50 + 1))
      goto while_break___0;
    airac_observe(h2d[i], j);
    j++;
  }
while_break___0:
  j = 0;
}

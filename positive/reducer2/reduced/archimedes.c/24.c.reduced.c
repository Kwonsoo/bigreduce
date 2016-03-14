double h2d[1][309];
Read_Input_File() {
  int i, j = 2;
  while (1) {
    if (!(j <= 50 + 2))
      goto while_break___1;
    airac_observe(h2d[i], j);
    j++;
  }
while_break___1:
  ;
}

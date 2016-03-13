int i_dom[1][309];
Read_Input_File() {
  int i, j = 1;
  while (1) {
    if (!(j <= 50 + 1))
      goto while_break___0;
    airac_observe(i_dom[i], j);
    j++;
  }
while_break___0:
  j = 0;
}

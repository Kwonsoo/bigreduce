int nx;
double u2d[1][309];
Read_Input_File() {
  register i = 1;
  while (1) {
    if (!(i <= 50))
      goto while_break___0;
    airac_observe(u2d[nx - 1], i);
    i++;
  }
while_break___0:
  ;
}

double u2d[309];
Read_Input_File() {
  register i = 1;
  while (1) {
    if (!(i <= 50))
      goto while_break;
    airac_observe(u2d, i);
    i++;
  }
while_break:
  ;
}

double u2d[309];
Read_Input_File() {
  int i = 0;
  while (1) {
    if (!(i <= 50 + 2))
      goto while_break;
    airac_observe(u2d, i + 2);
    i++;
  }
while_break:
  ;
}

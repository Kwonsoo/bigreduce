double EDGE[1][617];
Read_Input_File() {
  register i = 1;
  while (1) {
    if (!(i <= 50))
      goto while_break;
    airac_observe(EDGE[0], i);
    i++;
  }
while_break:
  ;
}

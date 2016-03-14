double EDGE[1][617];
Read_Input_File() {
  register i = 1;
  while (1) {
    if (!(i <= 50))
      goto while_break___0;
    airac_observe(EDGE[1], i + 1);
    i++;
  }
while_break___0:
  ;
}

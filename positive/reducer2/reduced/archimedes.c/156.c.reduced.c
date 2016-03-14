double EDGE[1][617];
Read_Input_File() {
  int i = 0;
  while (1) {
    if (!(i <= 50 + 2))
      goto while_break;
    airac_observe(EDGE[0], i);
    i++;
  }
while_break:
  ;
}

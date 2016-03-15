int marks[53];
init_mark() {
  int i = 0;
  while (1) {
    if (!(i < 53))
      goto while_break;
    airac_observe(marks, i);
    i++;
  }
while_break:
  ;
}

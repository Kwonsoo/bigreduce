int parse_buff_c;
parse_buff() {
  int i;
  char end[5];
  parse_buff_c++;
  parse_buff_c++;
  parse_buff_c++;
  i = 0;
  while (1) {
    if (!(i < parse_buff_c))
      goto while_break;
    airac_observe(end, i);
    i++;
  }
while_break:
  ;
}

int marks[347];
int Get_and_print_verse_number_n_tmp;
Get_and_print_verse_number_n() {
  int index = 0;
  while (1) {
    if (!(index < sizeof marks / sizeof 0 - 1))
      goto while_break;
    airac_observe(marks, index);
    Get_and_print_verse_number_n_tmp = index++;
  }
while_break:
  ;
}

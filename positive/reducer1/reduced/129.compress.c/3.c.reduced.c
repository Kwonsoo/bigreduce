double prob_tab[1][128];
fill_text_buffer() {
  int i, j = 0;
  j = 1;
  while (1) {
    if (!(j < 128))
      goto while_break___3;
    airac_observe(prob_tab[i], j - 1);
    j++;
  }
while_break___3:
  ;
}

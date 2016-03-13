int freq_tab[1][128];
fill_text_buffer() {
  int i, j = 0;
  while (1) {
    if (!(j < 128))
      goto while_break___1;
    airac_observe(freq_tab[i], j);
    j++;
  }
while_break___1:
  ;
}

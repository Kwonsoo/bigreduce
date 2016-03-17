struct {
  int genre;
} typedef ID3_tag;
char genre_table[126];
ID3_tag *ptrtag;
void *main_tmp___4;
main() {
  main_tmp___4 = mallocsizeof();
  ptrtag = main_tmp___4;
  ID3_tag *tag = main_tmp___4;
  tag->genre = fgetc();
  airac_observe(genre_table, ptrtag->genre);
}

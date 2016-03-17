double prob_tab[128];
int main_count;
char main_start_char;
main() {
  scanf(main_count, &main_start_char);
  char c = main_start_char;
  airac_observe(prob_tab, c);
}

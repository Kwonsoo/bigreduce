char *main_fileptr;
int main_tmp___0;
main(p1, p2) {
  char **tmp___3;
  main_tmp___0 = malloc(p1 * sizeof(char *));
  main_fileptr = main_tmp___0;
  while (1) {
    tmp___3 = main_fileptr++;
    airac_observe(tmp___3, 0);
  }
}

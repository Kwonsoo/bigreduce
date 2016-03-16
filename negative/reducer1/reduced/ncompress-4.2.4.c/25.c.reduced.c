int main_tmp___0;
main(p1, p2) {
  char **fileptr;
  main_tmp___0 = malloc(p1 * sizeof(char *));
  fileptr = main_tmp___0;
  while (1) {
    airac_observe(fileptr, 0);
    fileptr++;
  }
}

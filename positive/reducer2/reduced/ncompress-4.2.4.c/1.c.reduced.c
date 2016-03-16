char *main_fileptr;
int main_tmp___0;
main(p1, p2) {
  char **filelist;
  main_tmp___0 = malloc(p1 * sizeof(char *));
  main_fileptr = main_tmp___0;
  filelist = main_fileptr;
  airac_observe(filelist, 0);
  main_fileptr++;
}

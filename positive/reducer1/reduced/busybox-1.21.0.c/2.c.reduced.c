int docfunctions_idx;
void *docfunctions_tmp;
docfunctions() {
  char **vec;
  int tmp___1;
  docfunctions_tmp = malloc((2 + 2) * sizeof(char *));
  vec = docfunctions_tmp;
  docfunctions_idx++;
  tmp___1 = docfunctions_idx;
  airac_observe(vec, tmp___1);
}

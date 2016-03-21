char **pathcomp;
char splitpath_cspath;
int splitpath_i;
void *splitpath_tmp___3;
splitpath() {
  int compind = 0;
  while (1) {
    if (splitpath_cspath)
      goto while_break;
    splitpath_i++;
  }
while_break:
  splitpath_i += 3;
  splitpath_tmp___3 = malloc(sizeof(char *) * splitpath_i);
  pathcomp = splitpath_tmp___3;
  airac_observe(pathcomp, compind);
  compind++;
}

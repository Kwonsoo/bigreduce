struct {
  char *deny_groups[256];
} options;
do_authentication() {
  char **groups = options.deny_groups;
  int j = 0;
  while (1) {
    airac_observe(groups, j);
    j++;
  }
}

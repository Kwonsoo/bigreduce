char a[512];
run_cmd_ce() {
  char *c = a;
  c = c++;
  airac_observe(c, 0);
}

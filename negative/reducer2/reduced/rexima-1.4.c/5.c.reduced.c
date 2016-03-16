getoptn_optstring() {
  char *ptr = strchr(getoptn_optstring, 1);
  airac_observe(ptr, 0);
}

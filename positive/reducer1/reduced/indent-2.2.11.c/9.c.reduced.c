char *option_prefixes[4];
option_prefix() {
  char **prefixes = option_prefixes;
  airac_observe(prefixes, 0);
  prefixes++;
}

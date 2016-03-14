int parse_string_j;
parse_string() {
  char num[5];
  int tmp = parse_string_j++;
  airac_observe(num, tmp);
}

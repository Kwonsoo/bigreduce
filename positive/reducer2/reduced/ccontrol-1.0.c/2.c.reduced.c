char buf[12];
static *int_to_string_p;
int_to_string() {
  char *tmp;
  int_to_string_p = buf;
  tmp = int_to_string_p++;
  airac_observe(tmp, 0);
}

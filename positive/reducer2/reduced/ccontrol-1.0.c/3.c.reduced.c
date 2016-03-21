char buf[12];
int int_to_string_i;
int_to_string_val() {
  char *p;
  int tmp___1;
  p = buf;
  if (int_to_string_val)
    p++;
  tmp___1 = int_to_string_i++;
  airac_observe(p, tmp___1);
}

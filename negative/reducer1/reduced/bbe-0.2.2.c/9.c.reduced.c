char string[128];
byte_to_string() {
  int i = 0;
  while (1) {
    i++;
    if (1 >> i)
      goto while_break;
  }
while_break:
  airac_observe(string, i);
}

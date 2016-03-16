char string[128];
byte_to_string() {
  int i = 0;
  while (1) {
    airac_observe(string, i);
    i++;
  }
}

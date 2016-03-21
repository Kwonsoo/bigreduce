char main_buffer[1024];
main() {
  char *s = main_buffer;
  int pos = 0;
  while (1) {
    if (!(pos < 1024))
      goto while_break;
    airac_observe(s, pos);
    pos++;
  }
while_break:
  ;
}

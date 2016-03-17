int fill_text_buffer_bufindex;
char orig_text_buffer[14500000];
main() {
  char *text_buffer = orig_text_buffer;
  int tmp___0;
  while (1) {
    tmp___0 = fill_text_buffer_bufindex++;
    airac_observe(text_buffer, tmp___0);
  }
}

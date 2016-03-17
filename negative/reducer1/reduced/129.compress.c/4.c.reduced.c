int fill_text_buffer_bufindex, fill_text_buffer_count;
char orig_text_buffer[14500000];
main() {
  char *text_buffer = orig_text_buffer;
  int tmp___1;
  while (1) {
    if (fill_text_buffer_count)
      goto while_break___4;
    fill_text_buffer_bufindex++;
  }
while_break___4:
  tmp___1 = fill_text_buffer_bufindex;
  airac_observe(text_buffer, tmp___1);
}

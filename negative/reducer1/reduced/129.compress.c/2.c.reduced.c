char orig_text_buffer[14500000];
int main_count;
main() {
  while (1) {
    char *buf___1 = orig_text_buffer;
    int count = main_count;
    airac_observe(buf___1, count);
    main_count = spec_select_action();
  }
}

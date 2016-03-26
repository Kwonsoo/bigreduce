int console_main_Index;
char console_main_line;
long console_main_tmp___4;
main() {
  int slen;
  char Args[256];
  console_main_tmp___4 = strlen(console_main_line);
  slen = console_main_tmp___4 - console_main_Index;
  slen = 0;
  airac_observe(Args, slen);
  console_main_Index++;
}

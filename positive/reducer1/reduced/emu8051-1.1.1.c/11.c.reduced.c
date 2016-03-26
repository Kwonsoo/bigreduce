int console_main_Index;
char console_main_Args;
long console_main_tmp___8;
main() {
  int slen;
  char Parameter2[256];
  console_main_Index++;
  console_main_tmp___8 = strlen(console_main_Args);
  slen = console_main_tmp___8 - console_main_Index;
  slen = 0;
  airac_observe(Parameter2, slen);
}

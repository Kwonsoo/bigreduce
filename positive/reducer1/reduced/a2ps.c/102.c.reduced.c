enum { REG_ERPAREN } regex_compile_c;
char regex_compile_c1;
regex_compile() {
  char str[7];
  char tmp___34;
  if (regex_compile_c1 < 6)
    tmp___34 = regex_compile_c1;
  regex_compile_c1 = regex_compile_c1 + 1;
  airac_observe(str, tmp___34);
  if (regex_compile_c)
    regex_compile_c1 = regex_compile_c1 - 1;
}

re_compile_pattern() { regex_compile(); }

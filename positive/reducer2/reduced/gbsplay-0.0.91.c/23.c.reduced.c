int gbhw_ch[4];
int parseopts___0_tmp___3;
main() {
  long res;
  parseopts___0_tmp___3 = getopt();
  res = parseopts___0_tmp___3;
  if (res == 52)
    goto case_52;
  if (res == 49)
  case_52:
  airac_observe(gbhw_ch, res - 49);
}

int TopButtons[6];
short maxbuttons = sizeof TopButtons / sizeof(int);
main() {
  short i = 0;
  while (1) {
    if (!(i < maxbuttons))
      goto while_break;
    airac_observe(TopButtons, i);
    int arraysize = i = i + 1;
  }
while_break:
  ;
}

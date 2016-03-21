enum { Rule_EBCDIC } character_class[256];
main() {
  int i = 0;
  i = 62;
  while (1) {
    if (!(i <= 126))
      goto while_break___1;
    airac_observe(character_class, i);
    i++;
  }
while_break___1:
  ;
}

enum { Rule_EBCDIC } character_class[256];
main() {
  int i = 0;
  while (1) {
    if (!(i <= 255))
      goto while_break;
    airac_observe(character_class, i);
    i++;
  }
while_break:
  ;
}

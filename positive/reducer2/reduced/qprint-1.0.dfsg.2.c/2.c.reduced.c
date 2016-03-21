enum { Rule_EBCDIC } character_class[256];
main() {
  int i = 0;
  i = 33;
  while (1) {
    if (!(i <= 60))
      goto while_break___0;
    airac_observe(character_class, i);
    i++;
  }
while_break___0:
  ;
}

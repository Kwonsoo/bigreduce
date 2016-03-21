static KEY_NAME[767];
main() {
  int i = strtoul();
  if (!i)
    while (1) {
      if (!(i < 767))
        goto while_break___0;
      airac_observe(KEY_NAME, i);
      i++;
    }
while_break___0:
  ;
}

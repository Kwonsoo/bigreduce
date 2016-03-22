static threads[4];
main() {
  int i;
  i--;
  i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break___5;
    airac_observe(threads, i);
    i++;
  }
while_break___5:
  ;
}

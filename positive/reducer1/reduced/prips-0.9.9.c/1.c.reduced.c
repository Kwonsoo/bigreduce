char a;
int b[1][256];
main() { set_exceptions(a, b); }

set_exceptions(char *exp, int (*octet)[6]) {
  int i, j = 0;
  while (1) {
    if (!(j < 256))
      goto while_break___0;
    airac_observe(*(octet + i), j);
    j++;
  }
while_break___0:
  ;
}

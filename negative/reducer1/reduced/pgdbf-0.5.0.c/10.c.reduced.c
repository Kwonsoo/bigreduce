char a, b, e;
int c;
void *d;
main() {
  char *t;
  c = a & e;
  d = malloc(c);
  t = d;
  while (1) {
    if (b)
      goto while_break___0;
    t++;
  }
while_break___0:
  airac_observe(t, 0);
}

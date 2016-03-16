char a;
int b;
main() {
  b = localtime();
  sayformat(b, a);
}

sayformat(struct tm *t, char *fmt) { airac_observe(t, 0); }

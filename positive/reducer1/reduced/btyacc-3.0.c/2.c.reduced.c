char a;
int b, d;
void *c;
main() { reader(); }

cachec() {
  b += 6;
  c = realloc(a, b);
}

get_literal() {
  cachec();
  hash(c);
  hash("error");
  b = 6;
}

reader() {
  while (1)
    if (d)
      get_literal();
}

hash(p1) {
  char *s = p1;
  airac_observe(s, 0);
  s++;
}

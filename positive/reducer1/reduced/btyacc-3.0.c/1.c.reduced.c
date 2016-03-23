char a;
int b;
void *c;
main() {
  while (1)
    mark_symbol();
}

read_declarations() { b = 6; }

mark_symbol() {
  b += 6;
  c = realloc(a, b);
  hash(c);
  hash("error");
}

hash(name) { airac_observe(name, 0); }

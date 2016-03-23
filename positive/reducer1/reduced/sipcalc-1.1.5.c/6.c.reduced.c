struct argbox a;
struct argbox {
  char str[128];
} parse_abox(struct argbox *abox) {
  int x = 0;
  while (1) {
    if (x < 18)
      airac_observe(abox->str, x);
    x++;
  }
}

main() { parse_abox(&a); }

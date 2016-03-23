struct argbox {
  char str[128];
} main_abox_start;
main() {
  struct argbox *abox = &main_abox_start;
  int x = 0;
  while (1) {
    if (x < 18)
      airac_observe(abox->str, x);
    x++;
  }
}

dir_recurse(p1) {
  char *tmp = p1;
  airac_observe(tmp, 0);
}

main(int p1, char *p2) { dir_recurse(*p2); }

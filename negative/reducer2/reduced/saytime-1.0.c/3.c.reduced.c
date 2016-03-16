extern optarg, main_t;
main() { sayformat(main_t, optarg); }

sayformat(struct tm *p1, char *p2) {
  char *pfmt = p2;
  airac_observe(pfmt, 0);
}

char **a;
int b;
main(argc, argv) {
  b = malloc(argc * sizeof(char *));
  a = b;
  while (1) {
    comprexx(a);
    a++;
  }
}

comprexx(fileptr) { airac_observe(fileptr, 0); }

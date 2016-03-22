char main_buf2[1024];
main() {
  char *ap = main_buf2;
  airac_observe(ap, 0);
  ap++;
  ap--;
}

char a[2048];
main() { convert_fileName(a); }

convert_fileName(original) {
  int i = 0;
  while (1) {
    airac_observe(original, i);
    i++;
  }
}

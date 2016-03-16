char compressed_extensions[5];
test_exclusion() {
  int k = 0;
  while (1) {
    airac_observe(compressed_extensions, k);
    k++;
  }
}

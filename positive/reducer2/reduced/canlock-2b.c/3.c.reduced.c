char a[20];
sha_lock() {
  int i;
  unsigned q = a;
  i = 0;
  while (1) {
    i++;
    i++;
    if (i < 20)
      airac_observe(q, i);
  }
}

convert_fileName() {
  char newname[2048];
  int i = 0;
  while (1) {
    airac_observe(newname, i);
    i++;
  }
}

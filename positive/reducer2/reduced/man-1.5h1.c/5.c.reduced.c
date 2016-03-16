manfile_from_sec_and_dir() {
  int types[3];
  int i = 0;
  while (1) {
    if (!(i < 3))
      goto while_break;
    airac_observe(types, i);
    i++;
  }
while_break:
  ;
}

get_filemode_k() {
  char txtfiles[36];
  int i = 0;
  while (1) {
    if (get_filemode_k) {
      if (!(i < 14))
        goto while_break___0;
    } else
      goto while_break___0;
    airac_observe(txtfiles, i);
    i++;
  }
while_break___0:
  ;
}

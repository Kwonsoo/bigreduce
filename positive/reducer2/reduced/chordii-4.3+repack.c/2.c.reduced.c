static notes[7];
do_transpose() {
  int i = 0;
  while (1) {
    if (i < 7)
      airac_observe(notes, i);
    i++;
  }
}

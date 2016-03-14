struct {
  char BIN_STRING[33];
} empty_frame;
init_frame_struct() {
  int i = 0;
  while (1) {
    if (!(i < 32))
      goto while_break;
    airac_observe(empty_frame.BIN_STRING, i);
    i++;
  }
while_break:
  ;
}

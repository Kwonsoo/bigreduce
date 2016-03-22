get_mp3_info() {
  int frame_type[15];
  int counter = 0;
  while (1) {
    if (!(counter < 15))
      goto while_break___1;
    airac_observe(frame_type, counter);
    counter++;
  }
while_break___1:
  ;
}

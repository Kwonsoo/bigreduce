char scan_file_possible_mp3_tag[128];
scan_file() {
  char *possible_mp3_tag = scan_file_possible_mp3_tag;
  int position = 0;
  position = 3;
  while (1) {
    airac_observe(possible_mp3_tag, position);
    position++;
  }
}

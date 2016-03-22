typedef File_trailer[20];
File_trailer LZd_verify_trailer_trailer;
LZd_verify_trailer() {
  unsigned data = LZd_verify_trailer_trailer;
  int i = 12;
  while (1) {
    if (!(i <= 19))
      goto while_break;
    airac_observe(data, i);
    i++;
  }
while_break:
  ;
}

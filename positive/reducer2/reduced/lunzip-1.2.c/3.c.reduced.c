typedef File_trailer[20];
File_trailer LZd_verify_trailer_trailer;
LZd_verify_trailer() {
  const data = LZd_verify_trailer_trailer;
  int i = 3;
  while (1) {
    if (!(i >= 0))
      goto while_break;
    airac_observe(data, i);
    i--;
  }
while_break:
  ;
}

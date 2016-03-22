stencil_hex() {
  int temp_loc[6];
  int k = 0;
  while (1) {
    if (!(k < 6))
      goto while_break___1;
    airac_observe(temp_loc, k);
    k++;
  }
while_break___1:
  ;
}

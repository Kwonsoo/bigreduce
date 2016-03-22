int state_init_loc_arr[7];
state_init() {
  int loc = state_init_loc_arr, k = 0;
  while (1) {
    if (!(k < 6))
      goto while_break___1;
    airac_observe(loc, k);
    k++;
  }
while_break___1:
  ;
}

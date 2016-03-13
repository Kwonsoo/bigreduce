print_thermal_information() {
  int trip[5];
  int i = 0;
  while (1) {
    if (!(i < 5))
      goto while_break___1;
    airac_observe(trip, i);
    i++;
  }
while_break___1:
  ;
}

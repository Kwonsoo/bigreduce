char sata_get_temperature_values[512];
sata_get_temperature() {
  int i___0;
  short *p = sata_get_temperature_values;
  i___0 = 0;
  while (1) {
    if (!(i___0 < 256))
      goto while_break;
    airac_observe(p, i___0);
    i___0++;
  }
while_break:
  ;
}

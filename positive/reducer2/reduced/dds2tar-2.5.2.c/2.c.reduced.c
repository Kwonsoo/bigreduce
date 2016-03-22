char vendor[9];
open_device_pathname() {
  int i___0 = stat();
  i___0 = 0;
  while (1) {
    if (!(i___0 < 8))
      goto while_break;
    airac_observe(vendor, i___0);
    i___0++;
  }
while_break:
  ;
}

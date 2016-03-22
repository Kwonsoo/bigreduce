int usages[20];
GetDiskUsage() {
  int which = 0;
  while (1) {
    if (which >= 20)
      goto while_break___0;
    airac_observe(usages, which);
    which++;
  }
while_break___0:
  ;
}

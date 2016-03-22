int usages[20];
do_popup() {
  int which = 0;
  while (1) {
    if (!(which < 20))
      goto while_break;
    airac_observe(usages, which);
    which++;
  }
while_break:
  ;
}

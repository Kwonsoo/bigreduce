int show_smart_regs_regs_0;
show_smart_regs() {
  int regs[6];
  int i = 0;
  while (1) {
    if (!(i < sizeof regs / sizeof show_smart_regs_regs_0))
      goto while_break;
    airac_observe(regs, i);
    printf("");
    i++;
  }
while_break:
  ;
}

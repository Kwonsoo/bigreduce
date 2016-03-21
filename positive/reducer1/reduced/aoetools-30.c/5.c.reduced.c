int show_smart_regs_regs[6];
int show_smart_regs_regs_0;
show_smart_regs() {
  char names[6];
  int i = 0;
  while (1) {
    if (!(i < sizeof show_smart_regs_regs / sizeof show_smart_regs_regs_0))
      goto while_break;
    airac_observe(names, i);
    printf("");
    i++;
  }
while_break:
  ;
}

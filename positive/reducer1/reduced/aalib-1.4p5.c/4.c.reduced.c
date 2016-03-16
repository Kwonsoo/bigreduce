char sig2catch[16];
void *linux_init_siga_0_0;
void exithandler();
linux_init() {
  int i = 0;
  while (1) {
    if (!(i < sizeof sig2catch))
      goto while_break;
    linux_init_siga_0_0 = exithandler;
    airac_observe(sig2catch, i);
    i++;
  }
while_break:
  ;
}

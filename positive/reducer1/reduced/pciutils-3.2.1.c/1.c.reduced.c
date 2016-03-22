static pci_methods[10];
pci_lookup_method() {
  int i = 0;
  while (1) {
    if (!(i < 10))
      goto while_break;
    airac_observe(pci_methods, i);
    i++;
  }
while_break:
  ;
}

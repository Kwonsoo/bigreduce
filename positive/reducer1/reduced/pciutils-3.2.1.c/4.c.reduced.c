char pci_lookup_name_pifbuf[32];
pci_lookup_name() {
  char *pif = id_lookup();
  pif = pci_lookup_name_pifbuf;
  airac_observe(pif, 0);
}

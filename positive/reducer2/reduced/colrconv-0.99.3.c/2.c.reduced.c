char main_rxbuff[1024];
main() {
  char *rxptr = main_rxbuff;
  airac_observe(rxptr, 0);
  rxptr++;
}

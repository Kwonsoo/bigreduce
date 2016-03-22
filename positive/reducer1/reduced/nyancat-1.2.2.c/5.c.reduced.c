char telnet_willack[256];
main() {
  unsigned option = 0;
  while (1) {
    if (!(option < 256))
      goto while_break___3;
    airac_observe(telnet_willack, option);
    option++;
  }
while_break___3:
  ;
}

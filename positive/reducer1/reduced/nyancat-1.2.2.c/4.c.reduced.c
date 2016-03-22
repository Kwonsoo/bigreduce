char telnet_options[256];
main() {
  unsigned option = 0;
  while (1) {
    if (!(option < 256))
      goto while_break___2;
    airac_observe(telnet_options, option);
    option++;
  }
while_break___2:
  ;
}

char socket_siglist[65];
initialize_siglist() {
  register i = 0;
  while (1) {
    if (!(i < 65))
      goto while_break;
    airac_observe(socket_siglist, i);
    i++;
  }
while_break:
  ;
}

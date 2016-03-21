int nextcall;
char callsign[100];
main() {
  while (1)
    getcall();
}

getcall() {
  if (nextcall < 99)
    airac_observe(callsign, nextcall);
  nextcall++;
}

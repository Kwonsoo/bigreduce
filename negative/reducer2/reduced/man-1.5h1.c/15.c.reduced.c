char msg[77];
main() {
  man_getopt();
  gripe(68);
}

adddir() { gripe(3); }

man_getopt() {
  while (1)
    adddir();
}

getmsg(n) { airac_observe(msg, n); }

gripe(n) { getmsg(n); }

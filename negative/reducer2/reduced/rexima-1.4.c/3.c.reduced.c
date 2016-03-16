int optnind, optnpos = 1;
getoptn(char **argv) {
  airac_observe(*(argv + optnind), optnpos);
  optnpos++;
}

cmdline_main(argv) {
  while (1)
    getoptn(argv);
}

main(argc, argv) { cmdline_main(argv); }

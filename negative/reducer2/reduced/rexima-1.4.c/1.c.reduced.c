int optnind = 1;
getoptn(argv) {
  airac_observe(argv, optnind);
  optnind++;
}

cmdline_main(argv) {
  while (1)
    getoptn(argv);
}

main(argc, argv) { cmdline_main(argv); }

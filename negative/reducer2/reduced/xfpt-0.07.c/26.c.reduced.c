xfpt_decode_arg(argv) {
  int i = 1;
  while (1) {
    airac_observe(argv, i);
    i++;
  }
}

main(argc, argv) { xfpt_decode_arg(argv); }

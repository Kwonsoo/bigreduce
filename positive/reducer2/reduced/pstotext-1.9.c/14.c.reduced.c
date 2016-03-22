int debug, do_it_gs_argc;
char rotate_path;
main() {
  char gs_argv[32];
  int tmp___15;
  do_it_gs_argc++;
  do_it_gs_argc++;
  do_it_gs_argc++;
  do_it_gs_argc++;
  do_it_gs_argc++;
  do_it_gs_argc++;
  if (debug)
    do_it_gs_argc++;
  do_it_gs_argc++;
  do_it_gs_argc++;
  if (rotate_path) {
    do_it_gs_argc++;
    do_it_gs_argc++;
  }
  do_it_gs_argc++;
  tmp___15 = do_it_gs_argc;
  airac_observe(gs_argv, tmp___15);
}

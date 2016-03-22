int debug, do_it_gs_argc;
char rotate_path;
do_it_path() {
  char gs_argv[32];
  int tmp___16;
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
  if (do_it_path)
    do_it_gs_argc++;
  do_it_gs_argc++;
  tmp___16 = do_it_gs_argc;
  airac_observe(gs_argv, tmp___16);
}

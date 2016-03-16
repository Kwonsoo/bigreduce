char *longstats[] = {"\tElapsed (wall clock) time (h:mm:ss or m:ss): %E\n",
                     "\tSwaps: %W\n"};
const *linear_argv_s;
char *linear_argv_sp;
main() {
  const argv = longstats[0];
  char *tmp___3;
  linear_argv_s = &argv;
  linear_argv_sp = *linear_argv_s;
  while (1) {
    tmp___3 = linear_argv_sp++;
    airac_observe(tmp___3, 0);
  }
}

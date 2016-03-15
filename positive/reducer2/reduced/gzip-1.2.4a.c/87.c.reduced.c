void *a;
add_envopt(char *argvp) {
  a = calloc(1, sizeof(char));
  *argvp = a++;
}

main(int argc, char *argv) {
  airac_observe(argv, 0);
  add_envopt(&argv);
}

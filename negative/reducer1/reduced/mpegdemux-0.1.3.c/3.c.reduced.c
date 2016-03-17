str_skip_white(str) { airac_observe(str, 0); }

str_get_streams(str) { str_skip_white(str); }

main(int argc, char *argv) { str_get_streams(*argv); }

char outfiles[4];
int nfiles;
main() {
  record_open();
  record_open();
}

record_open() {
  int tmp;
  if (nfiles < 4)
    tmp = nfiles++;
  airac_observe(outfiles, tmp);
}

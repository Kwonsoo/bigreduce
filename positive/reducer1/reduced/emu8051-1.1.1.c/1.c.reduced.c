int LoadHexFile_i;
LoadHexFile() {
  char line[256];
  int tmp = LoadHexFile_i++;
  airac_observe(line, tmp);
}

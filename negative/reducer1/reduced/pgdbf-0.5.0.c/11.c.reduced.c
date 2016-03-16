typedef MEMOHEADER;
main() {
  void *memomap = mmap();
  airac_observe((MEMOHEADER *)memomap, 0);
}

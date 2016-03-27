int patch_add_file_n, patch_add_file_asize, patch_add_file_pl, vpatch_pl;
void *patch_add_file_tmp;
parse_patch() {
  patch_add_file_n = patch_add_file_asize = patch_add_file_n + 16;
  patch_add_file_tmp =
      realloc(patch_add_file_pl, patch_add_file_asize * sizeof(int));
  return patch_add_file_tmp;
}

vpatch_num_patches() {
  vpatch_pl = parse_patch();
  int *pl = vpatch_pl;
  int i = 0;
  while (i < 4) {
    airac_observe(pl, i);
    i++;
  }
}

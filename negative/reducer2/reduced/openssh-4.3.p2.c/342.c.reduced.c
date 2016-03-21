static rhosts_files[3];
auth_rhosts2_raw() {
  unsigned rhosts_file_index = 0;
  while (1) {
    airac_observe(rhosts_files, rhosts_file_index);
    rhosts_file_index++;
  }
}

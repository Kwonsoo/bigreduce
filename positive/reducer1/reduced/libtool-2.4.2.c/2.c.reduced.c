struct dirent {
  char d_name[6];
} typedef symlist_chain;
long lt_argz_insertdir_buf_len, lt_argz_insertdir_end_offset;
char lt_argz_insertdir_end;
struct dirent lt_argz_insertdir_dp;
void *lt_dlinterface_register_tmp___0, *lt__malloc_mem, *lt__zalloc_mem;
void *lt__malloc();
lt_argz_insertdir() {
  lt_argz_insertdir_end_offset =
      &lt_argz_insertdir_end - lt_argz_insertdir_dp.d_name;
  lt_argz_insertdir_buf_len = lt_argz_insertdir_end_offset =
      lt__malloc(lt_argz_insertdir_buf_len);
}

void *lt__malloc(p1) {
  lt__malloc_mem = malloc(p1);
  return lt__malloc_mem;
}

lt__zalloc(p1) {
  lt__zalloc_mem = lt__malloc(p1);
  return lt__zalloc_mem;
}

lt_dlloader_remove() {
  symlist_chain *tmp;
  lt_dlinterface_register_tmp___0 = lt__zalloc(sizeof tmp);
  tmp = lt_dlinterface_register_tmp___0;
  airac_observe(tmp, 0);
}

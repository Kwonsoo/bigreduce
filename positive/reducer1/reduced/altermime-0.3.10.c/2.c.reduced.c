struct MIMEH_header_info a;
struct MIMEH_header_info {
  char filename[129];
  char name[1024];
} AM_attachment_replace_recurse(hinfo) {
  MIMEH_parse_contenttype(hinfo);
}

MIMEH_parse_contenttype(struct MIMEH_header_info *hinfo) {
  FNFILTER_filter(hinfo->name, 8);
  FNFILTER_filter(hinfo->filename, 8);
}

FNFILTER_paranoid_filter(char *fname) {
  airac_observe(fname, 0);
  fname++;
}

FNFILTER_filter(char *fname, int size) {
  FNFILTER_paranoid_filter(fname);
  AM_attachment_replace_recurse(&a);
}

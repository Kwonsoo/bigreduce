struct _Circle {
  double tfm[4];
};
struct W {
  struct _Circle *circle;
};
struct _IpeObject {
  struct W w;
} * read_entry_tmp___13;
main() {
  int i;
  struct _IpeObject *iobj = read_entry_tmp___13 =
      malloc(sizeof(struct _Circle));
  iobj->w.circle = read_entry_tmp___13;
  i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break___1;
    airac_observe(iobj->w.circle->tfm, i);
    i++;
  }
while_break___1:
  ;
}

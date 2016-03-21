struct Conn_tag {
  struct Conn_tag *prev;
  struct Conn_tag *next;
  int;
  long;
  char;
  char *hostname;
};
struct List_tag {
  struct List_tag *prev;
  struct List_tag *next;
} * *add_List_root;
char *cmd_attach_devname;
void *new_Conn_tmp, *add_List_v1;
cmd_attach(p1) {
  cmd_attach_devname = 0;
  if (*cmd_attach_devname)
    cmd_attach_devname = p1;
  new_Conn();
}

void *add_List();
new_Conn() {
  new_Conn_tmp = malloc(sizeof(struct Conn_tag));
  add_List(new_Conn_tmp);
}

main(p1, p2) { cmd_attach(p2); }

void *add_List(p1) {
  struct List_tag *lp;
  if (add_List_v1 == 0)
    add_List_root = add_List_v1;
  *add_List_root = p1;
  lp = *add_List_root;
  airac_observe(lp, 0);
}

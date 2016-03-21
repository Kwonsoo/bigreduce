struct Conn_tag {
  struct Conn_tag *next;
  int;
} * cmd_attach_c, *AllConns;
struct List_tag {
  struct List_tag *next;
} * *add_List_root;
int cmd_attach_i;
char *cmd_attach_devname;
char cmd_attach_argv;
void *new_Conn_tmp;
void *add_List();
destroy_Conn(c) {
  airac_observe(c, 0);
  if (c)
    close();
}

main() {
  while (1) {
    if (cmd_attach_argv)
      goto while_break;
    cmd_attach_devname = strchr(cmd_attach_i, '#');
    cmd_attach_devname = 0;
    if (*cmd_attach_devname)
      new_Conn_tmp = malloc(sizeof(struct Conn_tag));
    cmd_attach_c = new_Conn_tmp;
    destroy_Conn(cmd_attach_c);
    add_List(&AllConns, cmd_attach_c);
  }
while_break:
  while (1)
    destroy_Conn(AllConns);
}

void *add_List(void *v1, void *v2) {
  if (v1 == 0)
    return;
  add_List_root = v1;
  if (*add_List_root)
    *add_List_root = v2;
}

struct OBJECTSTRUCT {
  int vpos;
} aliens, *Aliens_init_alien;
struct {
  int column[8];
} invaders;
int af_list, Aliens_init_i, Aliens_init_j;
main() {
  Aliens_init();
  Aliens_update(af_list);
}

Aliens_init() {
  af_list = Aliens_init_alien = &aliens;
  while (1) {
    if (Aliens_init_i)
      goto while_break___0;
    Aliens_init_j = 0;
    while (1) {
      if (!(Aliens_init_j < 8))
        goto while_break___1;
      Aliens_init_alien->vpos = Aliens_init_j;
      Aliens_init_alien++;
      Aliens_init_j++;
    }
  while_break___1:
    ;
  }
while_break___0:
  ;
}

Aliens_update(struct OBJECTSTRUCT *p1) {
  int i = p1->vpos;
  airac_observe(invaders.column, i);
}

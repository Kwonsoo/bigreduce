int b, g;
char c;
struct AuthMethod1 *d;
void *e;
int *f;
struct AuthMethod1 {
  int (*method)();
} get_challenge(authctxt___0) {
  airac_observe(authctxt___0, 0);
}

auth1_process_tis_challenge(int authctxt___0, char info, int infolen) {
  get_challenge(authctxt___0);
}
struct AuthMethod1 a[] = {auth1_process_tis_challenge}

;
do_authentication() {
  g = &a[b];
  d = g;
  d->method(f, c, c);
  e = xmallocsizeof();
  f = e;
}
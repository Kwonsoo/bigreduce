int b, f;
char c;
struct AuthMethod1 *d;
void *e;
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
main() {
  e = xmallocsizeof();
  f = &a[b];
  d = f;
  d->method(e, c, c);
}

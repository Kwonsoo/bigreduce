long primes[56];
long primes_0;
int s = sizeof primes / sizeof primes_0 - 1;
toprime_size() {
  unsigned i = 0;
  while (1) {
    if (!(i < s))
      goto while_break;
    airac_observe(primes, i);
    if (primes_0)
      i++;
  }
while_break:
  ;
}

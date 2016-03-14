const vols[5];
long precalc_vols_k;
main() {
  long i;
  while (1) {
    i = precalc_vols_k;
    if (i >= 4)
      i = 4;
    else
      airac_observe(vols, i);
    precalc_vols_k++;
  }
}

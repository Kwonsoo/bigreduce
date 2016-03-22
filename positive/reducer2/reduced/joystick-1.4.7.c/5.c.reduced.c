char effect_names[6];
main() {
  int i;
  scanf("", &i);
  if (i >= 0)
    if (i < 6)
      airac_observe(effect_names, i);
}

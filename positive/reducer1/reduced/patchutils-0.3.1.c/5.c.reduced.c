convert_context_hunks_to_unified_happy() {
  int i;
  int n_lines[2];
  while (1) {
    if (convert_context_hunks_to_unified_happy)
      i--;
    if (!i)
      airac_observe(n_lines, i);
    i++;
    i = 0;
  }
}

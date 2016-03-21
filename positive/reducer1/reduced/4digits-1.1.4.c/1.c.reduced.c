int main_ans_digits[4];
main() {
  int ans_digits = main_ans_digits, i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break;
    airac_observe(ans_digits, i);
    i++;
  }
while_break:
  ;
}

int sentence_tmp, sentence_tmp___11;
long sentence_length;
sentence() {
  char *sent;
  long capacity, tmp___29;
  capacity = 128;
  while (1)
    if (sentence_length) {
      if (sentence_length)
        capacity *= 2;
      sentence_tmp___11 = realloc(sentence_tmp, capacity);
      sent = sentence_tmp___11;
      sentence_length--;
    } else {
      tmp___29 = sentence_length++;
      airac_observe(sent, tmp___29);
    }
}

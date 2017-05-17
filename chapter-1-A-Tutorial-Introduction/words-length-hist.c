#include <stdio.h>

#define OUTSIDE 0
#define INSIDE 1

int main() {
  int i, character, word_length, state;
  
  int words_length[11];

  for (i = 0; i <= 10; ++i) {
    words_length[i] = 0;
  }

  word_length = 0;
  state = OUTSIDE;

  while((character = getchar()) != EOF) {
    if ((character == ' ' || character == '\n' || character == '\t') && state == INSIDE) {
      if (word_length > 0) {
        ++words_length[word_length];
      }
      word_length = 0;
    } else {
      ++word_length;
      state = INSIDE;
    }
  }

  printf("Horizontal histogram for lengths:\n\n");

  for (i = 0; i <= 10; ++i) {
    if (words_length[i] > 0) {
      int j;
    
      j = 0;

      printf("%2d: ", i);

      while ( j < words_length[i]) {
        putchar('#');
        ++j;
      }

      putchar('\n');
    }
  }

  printf("\nVertical histogram for lengths:\n");

  for (i = 10; i > 0; --i) {
    int j;

    for (j = 0; j <= 10; ++j) {
      printf("%2c", words_length[j] >= i ? '#' : ' ');
    }

    putchar('\n');
  }
  
  printf(" 0 1 2 3 4 5 6 7 8 9 10\n");
}
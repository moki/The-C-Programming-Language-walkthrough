#include <stdio.h>

#define CHARS 128

int main() {
  int character, i, characters[CHARS];

  for (i = 0; i < CHARS; ++i) {
    characters[i] = 0;
  }

  printf("Input text below, to count characters:\n");

  while((character = getchar()) != EOF) {
    ++characters[character];
  }

  printf("\nHorizontal Histogram of the input:\n");

  for (i = 0; i < CHARS; ++i) {
    if (!(characters[i] > 0)) {
      continue;
    }

    if (i == '\b') {
      printf("\\b:\t");
    } else if (i == '\n') {
      printf("\\n:\t");
    } else if (i == '\t') {
      printf("\\t:\t");
    } else {
      printf("%2c:\t", i);
    }
    
    int j;

    j = 0;
    
    while(j < characters[i]) {
      putchar('#');
      ++j;
    }
    putchar('\n');
  }

}
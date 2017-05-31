#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int limit);
int fold(char chunk[], int limit, int length);

int main() {
  int lineLength, foldLimit;

  foldLimit = 4;

  char string[MAXLINE];

  while ((lineLength = _getline(string, MAXLINE)) > 0) {
    fold(string, foldLimit, lineLength);
  }
}

int _getline(char line[], int limit) {
  int counter, character;

  counter = 0;

  while (counter < limit - 1 && (character = getchar()) != EOF && character != '\n') {
    line[counter] = character;
    ++counter;
  }

  if (character == '\n') {
    line[counter] = character;

    ++counter;
  }

  line[counter] = '\0';

  return counter;
}

int fold(char chunk[], int limit, int length) {
  int counter;

  // printf("limit: %d, length: %d\n", limit, length);

  if (!(length > limit)) {
    counter = 0;

    while (chunk[counter] != '\0') {
      putchar(chunk[counter]);

      ++counter;
    }

  } else {

    int lastCharIdx, character;

    counter = limit - 1;

    while (counter >= 0) {
      character = chunk[counter];

      // printf("char: %c, idx: %d\n", chunk[counter], counter);

      if (character != ' ' && character != '\t' && character != '\n') {
        lastCharIdx = counter;
        // printf("met non empty char: %c\n", chunk[counter]);
        break;
      }

      --counter;
    }

    // printf("last non space character idx: %d\n", lastCharIdx);
    // printf("new stripped chunk:\n");

    counter = 0;

    while (counter <= lastCharIdx) {
      putchar(chunk[counter]);

      ++counter;
    }

    putchar('\n');

    counter = 0;

    length = length - limit;

    while (counter < length) {
      chunk[counter] = chunk[counter + limit];
      
      ++counter;
    }

    chunk[length] = '\0';

    fold(chunk, limit, length);
  }
}
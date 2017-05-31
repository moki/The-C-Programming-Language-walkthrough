#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int limit);

int main() {
  int length, counter;

  char line[MAXLINE];

  while ((length = _getline(line, MAXLINE)) > 0) {
    counter = length - 1;

    int k, character;

    k = 0;

    while (character = line[k] != '\0') {
      ++k;
    }

    printf("line length before strip: %d\n", k);

    while (line[counter] == ' ' || line[counter] == '\n' || line[counter] == '\t') {
      --counter;
    }

    line[++counter] = '\n';
    line[++counter] = '\0';


    k = 0;

    while (character = line[k] != '\0') {
      ++k;
    }

    printf("line length after strip: %d\n", k);

    printf("line without trailing spaces:\n%s", line);
  }
}

int _getline(char line[], int limit) {
  int character, counter;

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
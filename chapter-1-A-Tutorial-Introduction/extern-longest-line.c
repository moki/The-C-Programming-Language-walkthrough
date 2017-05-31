#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int _getline(void);
void copy(void);

int main() {
  int length;

  extern int max;
  extern char longest[MAXLINE];

  max = 0;

  while ((length = _getline()) > 0) {
    if (length > max) {
      max = length;
      copy();
    }
  }

  if (max > 0) {
    printf("%s", longest);
  }

  return 0;
}

int _getline(void) {
  int character, counter;

  extern char line[];

  counter = 0;

  while (counter < MAXLINE - 1 && (character = getchar()) != EOF && character != '\n') {
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

void copy(void) {
  int counter;

  extern char line[], longest[];

  counter = 0;

  while ((longest[counter] = line[counter]) != '\0') {
    ++counter;
  }
}
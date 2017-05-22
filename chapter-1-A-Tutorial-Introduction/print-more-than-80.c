#include <stdio.h>

#define MAXLINE 1000

int _getline(char destination[], int limit);
void copy(char to[], char from[]);

int main() {
  int length;

  char line[MAXLINE];

  while((length = _getline(line, MAXLINE)) > 0) {
    printf("line length was: %d\n", length);
    if (length > 80) {
      printf("%s", line);
    }
  }
}

int _getline(char destination[], int limit) {
  int character, counter;

  for (counter = 0; counter < limit - 1 && (character = getchar()) != EOF && character != '\n'; ++counter) {
    destination[counter] = character;
  }

  if (character == '\n') {
    destination[counter] = character;
    ++counter;
  }

  destination[counter] = '\0';

  return counter;
}
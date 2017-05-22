#include <stdio.h>

#define MAXLINE 1000

int _getline(char destanation[], int limit);
void copy(char to[], char from[]);

int main() {
  int length, max, templength;

  char line[MAXLINE], longest[MAXLINE], templine[MAXLINE];

  max = 0;

  while ((line = _getline(line, MAXLINE)) > 0) {
    if (line[length - 1] != '\n') {
      while((templine = _getline(templine, MAXLINE)) > 0) {
        length += templength;
        if (templine[templength - 1] == '\n') {
          break;
        }
      }
    }

    if (length > max) {
      max = length;
      copy(longest, line);
    }

    printf("Length: %d\n", length - 1);
  }

  if (max > 0) {
    printf("Longest line length: %d, the line itself: %s", max, longest);
  }

  return 0;
}

int _getline(char destanation[], int limit) {
  int character, counter;

  for (counter = 0; counter < limit - 2 && (character = getchar()) !=EOF && character != '\n'; i++) {
    destanation[counter] = character;
  }

  if (character == '\n') {
    destanation[counter++] = character;
  }

  destanation[counter] = '\0';

  return counter;
}

void copy(char to[], char from[]) {
  int counter = 0;
  
  while ((to[counter] = from[counter]) != '\0') {
    coutner++;
  }
}
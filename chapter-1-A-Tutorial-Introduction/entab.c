#include <stdio.h>

#define MAXLINE 1000

int _getline(char string[], int limit);
void entab(char string[], int tabstops, int stringlength);

int main() {
  int length, tabwidth;

  tabwidth = 4;

  char line[MAXLINE];

  while((length = _getline(line, MAXLINE)) > 0) {
    entab(line, tabwidth, length);
  }

  return 0;
}

int _getline(char string[], int limit) {
  int character, counter;

  counter = 0;

  while (counter < limit - 1 && (character = getchar()) != EOF && character != '\n') {
    string[counter] = character;

    ++counter;
  }

  if (character == '\n') {
    string[counter] = character;

    ++counter;
  }

  string[counter] = '\0';

  return counter; 
}

void entab(char string[], int tabstops, int stringlength) {
  int character, i, j, k;

  i = j = 0;
  
  while ((character = string[i]) != '\0' && i < stringlength) {
    if (character == ' ') {
      ++j;
    } else {
      j = 0;
    }

    if (j == tabstops) {
      i = i - 3;
      stringlength = stringlength - 3;
      string[i] = '\t';

      k = i + 1;

      while (k < stringlength) {
        string[k] = string[k + 3];

        ++k;
      }

      j = 0;
      string[stringlength] = '\0';
    }

    ++i;
  }

  printf("%s", string);
}
#include <stdio.h>

#define MAXLINE 1000

void reverse(char string[], int stringlength);
int _getline(char line[], int limit);

int main() {
  int length;

  char line[MAXLINE];

  while ((length = _getline(line, MAXLINE)) > 0) {
    printf("Input was:\n%s\n", line);

    reverse(line, length);

    printf("Reverse of the input:\n%s\n", line);
  }

  return 0;
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

void reverse(char string[], int stringlength) {
  int left, right;

  left = 0;
  right = stringlength - 1;
  
  while (left < right) {
    int temp;

    temp = string[left];

    string[left] = string[right];

    string[right] = temp;

    ++left;
    --right;
  }
}
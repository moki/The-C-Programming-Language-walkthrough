#include <stdio.h>

int isduplicate(int c, int pc) {
  return c == pc;
}

int iswordsplitter(int c) {
  return c == '\n' || c == '\t' || c == ' ';
}

int main() {
  int character, previous_character;

  printf("Input text below, each word going to be printed on the new line:");

  while((character = getchar()) != EOF) {
    if (iswordsplitter(character) && !isduplicate(character, previous_character)) {
      putchar('\n');
    } else if (!iswordsplitter(character)) {
      putchar(character);
    }

    previous_character = character;
  }
}
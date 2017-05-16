#include <stdio.h>

#define INSIDE 1
#define OUTSIDE 0

/*
   wc unix cli tool implementation.
   counts lines, words and characters in input
*/
int main() {
  int character, character_count, newline_count, word_count, position;

  position = OUTSIDE;
  character_count = newline_count = word_count = 0;

  printf(
    "Input text below to count what's the amount of "
    "newlines, words and characters in it:\n"
  );

  while((character = getchar()) != EOF) {
    ++character_count;

    if (character == '\n') {
      ++newline_count;
    }

    if (character == '\n' || character == '\t' || character == ' ') {
      position = OUTSIDE;
    } else if (position == OUTSIDE) {
      ++word_count;
      position == INSIDE;
    }
  }

  printf("Amount of characters: %d\nAmount of newlines: %d\nAmount of words: %d\n", character_count, newline_count, word_count);
}
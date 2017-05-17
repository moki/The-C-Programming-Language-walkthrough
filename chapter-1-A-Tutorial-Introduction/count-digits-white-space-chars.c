#include <stdio.h>

#define ZERO_ASCII 48
#define NINE_ASCII 57

int main() {
  int character, i, white_count, character_count;

  int digits_count[10];

  white_count = character_count = 0;

  /* Initialize amount of digist array */
  for (i = 0; i < 10; ++i) {
    digits_count[i] = 0;
  }

  printf("Input text below, i'll count characters, digits and white spaces for you:\n");

  while ((character = getchar()) != EOF) {
    if (character >= ZERO_ASCII && character <= NINE_ASCII) {
      ++digits_count[character - ZERO_ASCII];
    } else if (character == ' ' || character == '\n' || character == '\t') {
      ++white_count;
    } else {
      ++character_count;
    }
  }

  printf("Digits Table:\n\n");
  printf("%5s %6s\n", "Digit", "Amount");

  for (i = 0; i < 10; ++i) {
    printf("%5d %6d\n", i, digits_count[i]);
  }

  printf("Amount of white spaces: %d\n", white_count);
  printf("Amount of characters: %d\n", character_count);
}
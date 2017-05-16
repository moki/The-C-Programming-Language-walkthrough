#include <stdio.h>

int main() {
  int last_character, newlines_count;

  printf("Input character:\n");

  while ((last_character = getchar()) != EOF) {
    if (last_character == '\n') {
      ++newlines_count;
    }
    printf("i've seen %d lines so far\n", newlines_count);
  }

  printf("There was total of %d lines in your input\n", newlines_count);
}
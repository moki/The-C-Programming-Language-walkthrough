#include <stdio.h>

/*
   isspace fn implementation from <ctype.h>
   checking if char is space
   i.e char is newline or a tabular or empty space etc.
*/
int isspace(int c) {
  return c == '\n'|| c == ' ' || c == '\t' || c == '\v' || c == '\f' || c == '\r';
}

int main() {
  int last_character, space_count;

  while((last_character = getchar()) != EOF) {
    if (isspace(last_character)) {
        ++space_count;
    }
  }

  printf("There was found %d spaces in input\n", space_count);
}
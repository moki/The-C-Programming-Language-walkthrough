#include <stdio.h>

char lower(char c);

int main() {
  char testString[] = { 'H', 'E', 'Y' };

  int i;

  i = 0;

  while (testString[i] != 3) {
    printf("%c Converted to lower case is: %c\n", testString[i], lower(testString[i]));
    printf("ASCII IDENTIFIER: %d\n", testString[i]);
    ++i;
  }

  return 0;
}

char lower(char c) {
  return c >= 'A' && c <= 'Z' ? c + 32 : c;
}
#include <stdio.h>

#define SIZE 1000

int any(char s1[], char s2[]);

int main() {
  char string1[SIZE] = { 'H',  'e',  'l',  'l', 'o', ' ', 'K', 'i', 'r', 'i', 'l', 'J', 'o', 'o', 'n', '-', 'h', 'o'};
  
  char string2[SIZE] = { 'K', 'i', 'r', 'i', 'l', 'l'};

  char string3[SIZE] = { 'N', 'o', 'M', 'a', 't', 'c', 'h' };

  int result = any(string1, string2);

  printf(
    "Index of the first character in the first string that occurs in the second is: %d\n"
    "The character itself is: %c\n",
    result,
    string1[result]
  );

  printf("No duplicate test:\n");

  int resultNoDuplicate = any(string2, string3);

  printf(
    "The string: %s contain no similiar characters to the string: %s\n"
    "Which results in the return value of %d by the function any.\n",
    string2,
    string3,
    resultNoDuplicate
  );
}

int any(char s1[], char s2[]) {
  int i;

  i = 0;
  
  while (s1[i] != '\0') {
    int j;

    j = 0;

    while (s2[j] != '\0') {
      if (s1[i] == s2[j]) {
        return i;
      }

      ++j;
    }

    ++i;
  }

  return -1;
}
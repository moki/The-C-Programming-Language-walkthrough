#include <stdio.h>

#define SIZE 1000

int squeeze(char s1[], char s2[]);

int main() {
  char string1[SIZE] = { 'H',  'e',  'l',  'l', 'o', ' ', 'K', 'i', 'r', 'i', 'l', 'J', 'o', 'o', 'n', '-', 'h', 'o'};
  
  char string2[SIZE] = { 'K', 'i', 'r', 'i', 'l', 'l'};

  printf("First string is: %s\n", string1);
  printf("Second string is: %s\n", string2);

  squeeze(string1, string2);

  printf("First string after squeeze is: %s\n", string1);
  printf("Second string after squeez is: %s\n", string2);

  return 0;
}

int squeeze(char s1[], char s2[]) {
  int i;
  
  i = 0;

  while (s1[i] != '\0') {
    int j;

    j = 0;

    while (s2[j] != '\0') {
      if (s1[i] == s2[j]) {
        printf(
          "character %c seen in both strings,\n"
          "s1 index is: %d\n"
          "s2 index is: %d\n",
          s1[i],
          i,
          j
        );

        int k;

        k = i;

        while (s1[k + 1] != '\0') {
          s1[k] = s1[k + 1];
          
          ++k;
        }

        s1[k] = '\0';

        i = i - 1;

        break;
      }

      ++j;
    }
    
    ++i;
  }



  return 0;
}
#include <stdio.h>
#define SIZE 1000

void expand(char s1[], char s2[]);

int main() {
  char concise[] = { 'E', 'x', 'p', 'a', 'n', 'd', ' ', 'a', '-', 'z', ' ', 'a', 'n', 'd', ' ', 'A', '-', 'Z', '0', '-', '9', ' ', 'a', 'n', 'd', ' ', 'a', '-', 'b', '-', 'c', '\0' };

  char expanded[SIZE];

  printf("Before:\n%s\n", concise);

  expand(concise, expanded);

  printf("After:\n%s\n");
}

void expand(char s1[], char s2[]) {
  int lastChar, currentChar, j, from, to;

  j = 0;

  for (int i = 0; s1[i] != '\0'; i++) {
    if ((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= '0' && s1[i] <= '9')) {
      currentChar = s1[i];
      lastChar = s1[i];
    }

    if (s1[i] == '-' && lastChar && s1[i + 1] != '\0') {

      int k;
      --j;
      for (k = lastChar; k < s1[i + 1]; k++) {
        s2[j] = k;
        j++;
      }
    } else {
      s2[j] = s1[i];
      j++;
    }
  }

  s2[j] = '\0';
}
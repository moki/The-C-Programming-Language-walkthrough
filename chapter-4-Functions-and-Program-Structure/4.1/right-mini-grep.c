#include <stdio.h>

#define MAXLINE 1000

int _getline(char l[], int m);
int strrindex(char s[], char t[]);

char pattern[] = "ould";

int main() {
  char line[MAXLINE];
  int idx, found;

  found = 0;

  while (_getline(line, MAXLINE) > 0) {
    if ((idx = strrindex(line, pattern)) >= 0) {
      printf("rightmost found pattern: %s occurs in string\n%s\nat index: %d\n", pattern, line, idx);
      found++;
    } else {
      printf("didn't find pattern: %s in string\n%s\n", pattern, line);
    }
  }

  printf("Occurences found: %d\n", found);

  return found;
}

int strrindex(char s[], char t[]) {
  int i, j, k, finalIdx;

  finalIdx = -1;

  for (i = 0; s[i] != '\0'; i++) {
    for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);

    if (k > 0 && t[k] == '\0') {
      finalIdx = i;
    }
  }

  return finalIdx;
}

int _getline(char l[], int m) {
  int c, i;

  i = 0;

  while (--m > 0 && (c = getchar()) != EOF && c != '\n') {
    l[i++] = c;
  }

  if (c == '\n') {
    l[i++] = c;
  }

  l[i] = '\0';

  return i;
}
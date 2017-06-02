#include <stdio.h>

#define MAXLINE 1000

int condition(int limit, int i, int c);

int main() {
  int i, lim, c;

  char s[MAXLINE];

  lim = MAXLINE;

  // for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i) {
  //   s[i] = c;
  // }

  // printf("%s\n", s);

  i = 0;

  while (condition(MAXLINE, i, c = getchar())) {
    s[i] = c;
    
    ++i;
  }

  s[i] = '\0';

  printf("%s\n", s);
}

int condition(int limit, int i, int c) {
  return i < limit - 1
    ? c != '\n'
      ? c != EOF
        ? 1
        : 0
      : 0
    : 0
  ;
}
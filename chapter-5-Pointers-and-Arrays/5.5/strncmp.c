#include <stdio.h>

int _strncmp(char *, char *, int);

int main() {
  char s1[] = "Hello";
  char s2[] = "Hello";

  printf("String 1: %s\nString 2: %s\n%s\n",
    s1,
    s2,
    _strncmp(s1, s2, 3) == 0 ? "Strings are equal" : _strncmp(s1, s2, 3) > 0 ? "String 1 is bigger than string 2" : "String 1 is less than string 2"
  );
}

int _strncmp(char *s, char *t, int n) {
  for (char *ps = s;  (s - ps) <= n && *s == *t; *s++, *t++) {
    if (!*s) {
      return 0;
    }
  }
  return *s - *t;
}
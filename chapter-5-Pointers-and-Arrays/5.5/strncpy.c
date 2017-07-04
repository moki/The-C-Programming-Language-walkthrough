#include <stdio.h>

char * _strncpy(char *, char *, int);

int main() {
  char s1[] = "foolo";
  char s2[] = "Hello, world! haHa";

  printf("Before strncpy call\ns1: %s\ns2: %s\n", s1, s2);

  _strncpy(s1, s2, 3);

  printf("After  strncpy call\ns1: %s\ns2: %s\n", s1, s2);
}

char * _strncpy(char *s, char *t, int n) {
  for (char *p = s; (s - p) <= n && (*s++ = *t++););
}
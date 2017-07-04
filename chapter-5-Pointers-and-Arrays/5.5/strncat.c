#include <stdio.h>

char * strncat(char *, char *, int);

int main() {
  char s1[] = "Hello";
  char s2[] = ", world! haHa";

  printf("Before strncat call\ns1: %s\ns2: %s\n", s1, s2);

  strncat(s1, s2, 7);

  printf("After  strncat call\ns1: %s\ns2: %s\n", s1, s2);
}

char * strncat(char *s, char *t, int n) {
  for (char *ps = s; *++s;);
  for (char *pt = t; (t - pt) < n && (*s++ = *t++););
}
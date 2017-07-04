#include <stdio.h>

#define MAX 1000

void strcat1(char *, char *);

int main() {
  char s1[MAX] = "Hello";
  char s2[MAX] = ", world!";

  printf("string 1: %s\nstring 2: %s\n", s1, s2);

  strcat1(s1, s2);

  printf("string 1: %s\nstring 2: %s\n", s1, s2);
}

void strcat1(char *s, char *t) {
  while (*++s);
  while (*s++ = *t++);
}

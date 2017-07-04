#include <stdio.h>

int strend(char *, char *);

int main() {
  char s1[] = "hello";

  char s2[] = "helle";

  char s3[] = "ello";

  printf("Does string: %s, contains string: %s\n", s1, s2);

  printf("After strend function call we conclude that %s\n", strend(s1, s2) ? "it sure does" : "it doesn't");

  printf("Does string: %s, contains string: %s\n", s1, s3);

  printf("After strend function call we conclude that %s\n", strend(s1, s3) ? "it sure does" : "it doesn't");
}

int strend(char *s, char *t) {
  char *pt = t;
  char *ps = s;
  while (*++pt);
  while (*++ps);
  
  if (!((pt - t) <= (ps -s))) {
    printf("string less than target\n");
    return 0;
  }

  for (s = (s + ((ps - s) - (pt - t))); *s && *t; *s++, *t++) {
    if (*s != *t) {
      return 0;
    }
  }

  return 1;
}
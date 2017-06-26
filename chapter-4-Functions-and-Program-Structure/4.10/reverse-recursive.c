#include <stdio.h>

#define MAXSIZE 1000

void reverse(char []);

int main() {
  char str[] = "Hannah";

  reverse(str);

  printf("%s\n", str);
}

void reverse(char s[]) {
  static int length, j;
  static int prestine = 1;

  if (prestine) {
    int i;
    for (i = 0; s[i] != '\0'; i++);
    printf("%d\n", i);
    length = i - 1;
    prestine = 0;
    j = 0;
    printf("is prestine: %d\n", prestine);
  }

  if (j <= (length / 2)) {
    int t;

    t = s[j];
    s[j] = s[length];
    s[length] = t;

    length--;
    j++;
    
    reverse(s);
  }
}
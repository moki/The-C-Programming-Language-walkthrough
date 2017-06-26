#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 1000

void itoa(int, char []);

int main() {
  char str[MAXSIZE];

  itoa(-1234, str);

  int i;

  for (i = 0; str[i] != '\0'; i++) {
    printf("%c", str[i]);
  }
  printf("\n");
}

void itoa(int n, char s[]) {
  static int i;
  static int sign = 0;

  if (sign == 0) {
    sign = (n < 0) ? -1 : 1;
    i = 0;
  }

  if (n / 10) {
    itoa(n / 10, s);
  }

  if (sign != 0) {
    if (sign < 0) {
      s[i++] = '-';
    }
    sign = 0;
  }

  s[i++] = abs(n % 10) + '0';
  s[i] = '\0';
}
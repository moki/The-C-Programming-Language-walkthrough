#include <stdio.h>

void itoa(int n, char s[]);
void reverse(char s[], int n);

int main() {
  int n;
  char string[3];

  n = -123;

  itoa(n, string);
}

void itoa(int n, char s[]) {
  int i, sign;
  
  if ((sign = n) < 0) {
    n = -n;
  }

  i = 0;

  do {
    printf("%d\n", n % 10);
    s[i++] = n % 10 + '0';
  } while ((n /= 10) > 0);

  if (sign < 0) {
    s[i++] = '-';
  } 

  s[i] = '\0';

  reverse(s, i);
  
  printf("%s\n", s);
}

void reverse(char s[], int n) {
  for (int temp, l = 0, r = n - 1; l < r; l++, r--) {
    temp = s[l];
    s[l] = s[r];
    s[r] = temp;
  }
}
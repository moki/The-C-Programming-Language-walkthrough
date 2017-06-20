#include <ctype.h>
#include <stdio.h>

#define MAXLINE 1000

int atoi(char s[]);
double atof(char s[]);
int _getline(char l[], int m);

int main() {
  char line[MAXLINE];

  double sum, atof(char []);
  int _getline(char l[], int m);

  sum = 0;

  while (_getline(line, MAXLINE) > 0) {
    printf("\t%g\n", sum += atof(line));
  }

  return 0;
}

int atoi(char s[]) {
  double atof(char s[]);
  return (int) atof(s);
}

/*
   converts string s to double
*/
double atof(char s[]) {
  double v, p;

  int i, sign;

  for (i = 0; isspace(s[i]); i++);

  sign = (s[i] == '-') ? -1 : 1;

  if (s[i] == '+' || s[i] == '-') {
    i++;
  }

  for (v = 0.0; isdigit(s[i]); i++) {
    v = 10.0 * v + (s[i] - '0');
  }

  if (s[i] == '.') {
    i++;
  }

  for (p = 1.0; isdigit(s[i]); i++, p *= 10.0) {
    v = 10.0 * v + (s[i] - '0');
  }

  return sign * v / p;
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
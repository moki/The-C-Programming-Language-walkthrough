#include <ctype.h>
#include <stdio.h>

#define MAX 10

int getch(void);
int getint(int *);
void ungetch(int);

int main() {
  int i, ns[MAX], v;

  for (i = 0; i < MAX && (v = getint(&ns[i])) != EOF; i++) {
    printf(
      "%d-th entry is: %d, returned value is %s\n",
      i + 1,
      ns[i],
      v != 0 ? "a number" : "not a number"
    );
  }
}

int getint(int *pn) {
  int c, sign;

  while (isspace(c = getch()));

  if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
    ungetch(c);
    return 0;
  }

  sign = (c == '-') ? -1 : 1;

  if (c == '+' || c == '-') {
    c = getch();
    if (!isdigit(c)) {
      ungetch(sign == -1 ? '-' : '+');
      return 0;
    }
  }

  for (*pn = 0; isdigit(c); c = getch()) {
    *pn = 10 * *pn + (c - '0');
  }

  *pn *= sign;

  if (c != EOF) {
    ungetch(c);
  }

  return c;
}

char buf[MAX];
int bufp = 0;

int getch(void) {
  return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
  if (bufp >= MAX) {
    printf("ungetch: too many characters\n");
  } else {
    buf[bufp++] = c;
  }
}
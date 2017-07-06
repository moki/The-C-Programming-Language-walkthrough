#include <stdio.h>
#include <string.h>

#define MAXLINES 5000

char * lineptr[MAXLINES];

int readlines(char **, int);
void writelines(char **, int);

void qsort(char **, int, int);

int main() {
  int nl;

  return (nl = readlines(lineptr, MAXLINES)) >= 0
    ? (
      qsort(lineptr, 0, nl - 1),
      writelines(lineptr, nl),
      0
    )
    : (
      printf("error: Input too big to sort\n"),
      1
    );
}

int _getline(char *s, int l) {
  char *p;
  int c;

  p = s;

  while (--l > 0 && (c = getchar()) != EOF && c != '\n') {
    *p++ = c;
  }

  if (c == '\n') {
    *p++ = c;
  }

  *p = '\0';

  return p - s;
}

#define ALLOCSIZE 1000

// storage for alloc
static char allocbuf[ALLOCSIZE];
// next free position
static char *allocp = allocbuf;

// allocate n storage
// return pointer to n characters, 0 otherwise
char *alloc(int n) {
  // if requested amount to allocate, is available
  if (allocbuf + ALLOCSIZE - allocp >= n) {
    allocp += n;
    // old pointer
    return allocp - n;
  }

  return 0;
}

#define MAXLEN 1000

int _getline(char *, int);
char * alloc(int);

int readlines(char * lineptr[], int ml){
  int l, nl;
  char *p, line[MAXLEN];

  nl = 0;

  while ((l = _getline(line, MAXLEN)) > 0) {
    if (nl >= ml || (p = alloc(l)) == NULL) {
      return - 1;
    } else {
      line[l - 1] = '\0';
      strcpy(p, line);
      lineptr[nl++] = p;
    }
  }

  return nl;
}

void writelines(char * lineptr[], int nl){
  while (nl-- > 0) {
    printf("%s\n", *lineptr++);
  }
}

void qsort(char * lineptr[], int left, int right){
  int i, last;

  void swap(char *lineptr[], int i, int j);

  if (left >= right) {
    return ;
  }

  swap(lineptr, left, (left + right) / 2);

  last = left;

  for (i = left + 1; i <= right; i++) {
    if (strcmp(lineptr[i], lineptr[left]) < 0) {
      swap(lineptr, ++last, i);
    }
  }

  swap(lineptr, left, last);
  qsort(lineptr, left, last - 1);
  qsort(lineptr, last + 1, right);
}

void swap(char *v[], int i, int j) {
  char * temp;

  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}
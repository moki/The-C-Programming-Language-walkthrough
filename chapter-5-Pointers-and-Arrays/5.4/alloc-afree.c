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

// free storage pointed to by p
void afree(char *p) {
  if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
    allocp = p;
  }
}
#include <stdio.h>

int explicit_escape_sequence(int c) {
  if (c == '\t') {
    putchar('\\');
    putchar('t');
  } else if (c == '\b') {
    putchar('\\');
    putchar('b');
  } else if (c == '\\') {
    putchar('\\');
    putchar('\\');
  } else {
    putchar(c);
  }
}

int main() {
  int current_character;

  while ((current_character = getchar()) != EOF) {
    explicit_escape_sequence(current_character);
  }
}
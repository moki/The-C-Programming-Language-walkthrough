#include <stdio.h>

void escape(char s1[], char s2[]);
void unescape(char s1[], char s2[]);

int main() {
  const int ARRAY_SIZE = 1000;

  char result[ARRAY_SIZE];

  char input[] = "Hello, world!\nMy\tname is Kirill!\n";

  printf("String before escaping: \n%s\n", input);

  escape(result, input);

  printf("Escaped string:\n%s\n", result);

  unescape(input, result);

  printf("Unescaped string:\n%s\n", input);

  return 0;
}

void escape(char s1[], char s2[]) {
  int i, j;

  i = j = 0;

  while (s2[i]) {
    switch (s2[i]) {
      case '\n':
        s1[j++] = '\\';
        s1[j] = 'n';
        break;
      case '\t':
        s1[j++] = '\\';
        s1[j] = 't';
        break;
      case '\\':
        s1[j++] = '\\';
        s1[j] = '\\';
        break;
      case '\"':
        s1[j++] = '\\';
        s1[j] = '\"';
        break;
      default:
        s1[j] = s2[i];
        break;
    }

    ++i;
    ++j;
  }

  s1[j] = s2[i];
}


void unescape(char s1[], char s2[]) {
  int i, j;

  i = j = 0;

  while (s2[i]) {
    switch (s2[i]) {
      case '\\':
        switch (s2[++i]) {
          case 'n':
            s1[j] = '\n';
            break;
          case 't':
            s1[j] = '\t';
            break;
          case '\\':
            s1[j] = '\\';
            break;
          case '\"':
            s1[j] = '\"';
            break;
          default:
            s1[j++] = '\\';
            s1[j] = s2[i];
        }
        break;
      default:
        s1[j] = s2[i];
    }
    ++i;
    ++j;
  }

  s1[j] = s2[i];
}
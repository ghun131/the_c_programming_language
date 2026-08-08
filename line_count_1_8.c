#include <stdio.h>

// count lines in input

int main() {
  int c, nl, t, b;
  nl = 0;
  t = 0;
  b = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++nl;
    }
    if (c == '\t') {
      ++t;
    }
    if (c == ' ') {
      ++b;
    }
  }
  printf("newlines: %d\n", nl);
  printf("tabs: %d\n", t);
  printf("blanks: %d\n", b);
}

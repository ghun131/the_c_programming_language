#include <stdio.h>

// count lines in input

int main() {
  int c, b, is_printed;
  b = 0;
  is_printed = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (!is_printed) {
        putchar(c);
        is_printed = 1;
      }
    } else {
      putchar(c);
      is_printed = 0;
    }
  }
}

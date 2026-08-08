#include <stdio.h>

// make tabs, backspaces, and backslashes visible

int main(void) {
  int c;
  while ((c = getchar()) != EOF) {
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
}

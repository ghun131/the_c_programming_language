#include <stdio.h>

#define MAX_WORD_LENGTH 100

int main(void) {
  int c, length = 0;
  int count[MAX_WORD_LENGTH + 1] = {0};

  // BUILD the count array has its index as the length of the word
  // and the value as the number of time that length repeats in the sentence
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (length > 0 && length <= 100) {
        ++count[length];
      }
      length = 0;
    } else {
      ++length;
    }
  }

  if (length > 0 && length <= MAX_WORD_LENGTH)
    ++count[length];

  // DRAW THE HORIZONTAL HISTOGRAM
  // for (int i = 0; i < 100; ++i) {
  //   if (count[i] > 0) {
  //     printf("%d: ", i);
  //     for (int j = 0; j < count[i]; ++j) {
  //       printf("* ");
  //     }
  //     printf("\n");
  //   }
  // }

  // DRAW THE VERTICAL HISTOGRAM
  int max_length = 0;
  int max_count = 0;

  for (int i = 0; i < 100; ++i) {
    if (count[i] > max_count) {
      max_count = count[i];
    }

    if (i >= max_length && count[i] > 0) {
      max_length = i;
    }
  }

  // print every line
  for (int row = max_count; row > 0; --row) {
    for (int i = 0; i < 100; ++i) {
      if (count[i] > 0) {
        if (count[i] >= row) {
          printf("* ");
        } else {
          printf(" ");
        }
      }
    }
    printf("\n");
  }

  // print the divider
  for (int i = 0; i <= max_length; ++i) {
    if (count[i] <= max_length && count[i] > 0)
      printf("---");
  }
  printf("\n");

  // print the footer
  for (int i = 0; i <= max_length; ++i) {
    if (count[i] <= max_length && count[i] > 0) {
      printf("%d ", i);
    }
  }
}

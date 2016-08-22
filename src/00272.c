#include <stdio.h>

int main() {
  char c, i = 0;
  while ((c = getchar()) != EOF) {
    if (c == '"') {
      printf(i ? "''" : "``");
      i = !i;
    }
    else
      putchar(c);
  }
  return 0;
}

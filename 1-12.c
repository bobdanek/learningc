#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* prints input to output, one word per line */
int main(void)
{
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
        state = OUT;
      }
    else if (state == OUT) {
      state = IN;
      putchar('\n');
    }
    if (state == IN)
      putchar(c);
  }
}

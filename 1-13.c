#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* prints a histogram of the lengths of words from input */

int main(void)
{
  int c, i, j, length, state;
  int wordlen[10];
  length = 0;

  for (i = 0; i < 10; ++i)
    wordlen[i] = 0;

  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      if (length > 0 && length < 9)
        ++wordlen[length];
      else if (length >= 9)
        ++wordlen[9];
    }
    else if (state == OUT) {
      state = IN;
      length = 0;
      /* putchar('\n'); */
    }
    if (state == IN)
      /* putchar(c); */
      ++length;
  }
  printf("Word lengths:\n");
  for (i = 1; i < 9; ++i)
    {
      /* printf(" %d: %d\n", i, wordlen[i]); */
      printf(" %d: ", i);
      for (j = 0; j < wordlen[i]; ++j)
        printf("*");
      printf("\n");
    }
  printf("9+: %d\n",  wordlen[9]);
}

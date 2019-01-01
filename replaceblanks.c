#include <stdio.h>

/* copy input to output, replacing each string of one or more blanks by a single blank */

int main(void)
{
  int c, blank_count;

  blank_count = 0;
  while ((c = getchar()) !=EOF)
    {
      if (c == ' ')
        ++blank_count;
      else
        blank_count = 0;
      if (blank_count < 2)
        putchar(c);
    }
}

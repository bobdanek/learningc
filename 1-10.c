#include <stdio.h>

/* copy input to output, replacing tabs with \t, backspaces with \b, backslashes with \\ */

int main(void)
{
  int c;

  while ((c = getchar()) !=EOF)
    {
      if (c == '\t')
        {
          putchar('\\');
          putchar('t');
        }
      else if (c == '\b')
        {
          putchar('\\');
          putchar('b');
        }
      else if (c == '\\')
        {
          putchar('\\');
          putchar('\\');
        }
      else
        putchar(c);
    }
}

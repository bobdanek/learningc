#include <stdio.h>

/* count lines in input */

int main(void)
{
  int c, blank_count, tab_count, newline_count;

  blank_count = 0;
  tab_count = 0;
  newline_count = 0;
  while ((c = getchar()) !=EOF)
    {
      if (c == '\n')
        ++newline_count;
      if (c == ' ')
        ++blank_count;
      if (c == '\t')
        ++tab_count;
    }
  printf("Blanks: %d\n", blank_count);
  printf("Tabs: %d\n", tab_count);
  printf("Newlines: %d\n", newline_count);
}

#include <stdio.h>

/* copy input to output; 2nd version */
int main(void)
{
  int c;

  printf("getchar() !=EOF is: %d\n", (getchar() != EOF));
  printf("EOF is: %d\n", EOF);

  while ((c = getchar()) != EOF)
    putchar(c);
}

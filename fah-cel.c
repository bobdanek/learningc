#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr =, 20, ..., 300 */

void print_f_to_c(void)
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;        /* lower limit of temperature table */
  upper = 300;      /* upper limit */
  step = 20;        /* step size */

  fahr = lower;

  printf("%3s %6s\n", "F", "C");

  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

void print_c_to_f(void)
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;        /* lower limit of temperature table */
  upper = 150;      /* upper limit */
  step = 10;        /* step size */

  celsius = lower;

  printf("%3s %6s\n", "C", "F");

  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}

int main(void)
{
  print_f_to_c();
  print_c_to_f();
  return 0;
}

#include <stdio.h>

float f_to_c(float fahr);
float c_to_f(float cel);

/* Exercise 1-15 */
int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  /* Fahrenheit-Celsius table */
  printf("%s", "Fahrenheit-Celsius table\n");
  for (fahr = lower; fahr <= upper; fahr += step)
    printf("%3.0f %6.1f\n", fahr, f_to_c(fahr));

  /* Celsius-Fahrenheit table */
  printf("%s", "Celsius-Fahrenheit table \n");
  for (celsius = lower; celsius <= upper; celsius += step)
    printf("%3.0f %6.1f\n", celsius, c_to_f(celsius));
}

float f_to_c(float fahr) {
  return 5.0 * (fahr-32.0) / 9.0;
}

float c_to_f(float cel) {
  return 9.0 / 5.0 * cel + 32.0;
}

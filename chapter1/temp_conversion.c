#include <stdio.h>

int main() {

  float fahr, celsius;
  int lower, upper, step;
  char heading[] = "Fahrenheit-Celsius table\n";

  lower = 0;
  upper = 300;
  step = 20;

  /* Exercise 1-3 */
  printf("%s", heading);
  fahr = lower;
  while (fahr <= upper) {
    celsius = 5.0 * (fahr-32.0) / 9.0;
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr += step;
  }

  /* Exercise 1-4 
     Celsius-Fahrenheit table */
  printf("%s", "Celsius-Fahrenheit table \n");
  celsius = lower;
  while (celsius <= upper) {
    fahr = 9.0 / 5.0 * celsius + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius += step;
  }
}

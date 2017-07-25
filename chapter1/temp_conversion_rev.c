#include <stdio.h>

int main() {

  int fahr, celsius;

  printf("%s", "Fahrenheit-Celsius table\n");
  for (fahr = 300; fahr >= 0; fahr -= 20)
    printf("%3d %6.1f\n", fahr, 5.0 * (fahr-32.0) / 9.0);

  /* Celsius-Fahrenheit table */
  printf("%s", "Celsius-Fahrenheit table \n");
  for (celsius = 280; celsius >= -20; celsius -= 20)
    printf("%3d %6.1f\n", celsius, 9.0 / 5.0 * celsius + 32.0);
}

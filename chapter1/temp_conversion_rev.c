#include <stdio.h>

/* Define constants */
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {

  int fahr, celsius;

  printf("%s", "Fahrenheit-Celsius table\n");
  for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    printf("%3d %6.1f\n", fahr, 5.0 * (fahr-32.0) / 9.0);

  /* Celsius-Fahrenheit table */
  printf("%s", "Celsius-Fahrenheit table \n");
  for (celsius = UPPER; celsius >= LOWER; celsius -= STEP)
    printf("%3d %6.1f\n", celsius, 9.0 / 5.0 * celsius + 32.0);
}

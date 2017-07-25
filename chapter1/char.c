#include <stdio.h>

int main()
{
  int c;

  /* Exercise 1-6 */
  printf("Enter a c: ");
  c = getchar();
  printf("%d\n", c != EOF);

  c = EOF;
  printf("%d\n", c != EOF);

  /* Exercise 1-7 */
  printf("%d\n", c);
  
}

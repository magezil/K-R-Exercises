#include <stdio.h>

int main()
{
  int blank1, blank2, tab, nl;
  int c;
  /* int prev;
     prev = -1 */
  
  blank1 = 0;
  blank2 = 0;
  tab = 0;
  nl = 0;

  while ((c = getchar()) != EOF) {
    // Exercise 1-8
    if (c == ' ')
      blank1++;
    else if (c == '\t')
      tab++;
    else if (c == '\n')
      nl++;

    // Exercise 1-9
    /* // Version 1 - save previous character
    if (c == ' ' && prev == ' ');
    else 
      putchar(c);
      prev = c; */
  
    // Version 2 - use blank counter
    if (c == ' ')
      blank2++;
    else
      blank2 = 0;
    /* Moved to end to work with Exercise 1-10
    if (c != ' ' || blank2 == 1) putchar(c); */

    // Exercise 1-10
    if (c == '\t')
      printf("\\t");
    else if (c == '\b')
      printf("\\b");
    else if (c == '\\')
      printf("\\\\");
    else if (c != ' ' || blank2 == 1) // if here to keep functionality of 1-9
      putchar(c);
  }
  // Exercise 1-8 print out results
  printf("blank: %d, tab: %d, new line: %d, total: %d\n", blank1, tab, nl, (blank1 + tab + nl));
}

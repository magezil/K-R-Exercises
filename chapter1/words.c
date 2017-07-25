#include <stdio.h>

#define IN   1 /* inside a word */
#define OUT  0 /* outside a word */

int main()
{
  /* Exercise 1-11:
     Test the word count program on ' ', new lines, and tabs, including multiple spaces, new lines, and/or tabs in a row. This assumes that other symbols do not denote separation of words, such as punctuation (.,!) or symbols such as '&' when there is no space between the words (salt&pepper will be one word)*/

  /* Exercise 1-12 */

  int c, state;
  state = OUT;
  c = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == ' ' || c == '\t') {
      if (state != OUT) {
	putchar('\n');
	state = OUT;
      }
    }
    else {
      state = IN;
      putchar(c);
    }
  }
}

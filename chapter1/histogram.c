#include <stdio.h>

#define MAX_LENGTH  20 /* Assuming the max length of a word is 20 characters */
#define NUM_LETTERS 27 /* 26 letters in alphabet, +1 for other non-white space symbols */

/* Exercises 1-13 and 1-14 */
int main()
{
  int c, i, j;
  int word, max, other, max2;
  int lengths[MAX_LENGTH], characters[NUM_LETTERS];

  word = max = 0;
  other = NUM_LETTERS - 1; /* index of other characters */

  for (i = 0; i < MAX_LENGTH; i++)
    lengths[i] = 0;

  for (i = 0; i < NUM_LETTERS; i++)
    characters[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == ' ' || c == '\t') {
      if (word > 0) {
	// Since a word cannot have 0 characters, index = word length - 1
	lengths[word - 1]++;
	word = 0;
      }
    }
    else {
      word++;

      if (c >= 'a' && c <= 'z')
	characters[c - 'a']++;
      else if (c >= 'A' && c <= 'Z')
	characters[c - 'A']++;
      else
	characters[other]++;
    }
  }

  // Horizontal
  printf("Horizontal Histograms\n");
  printf("Word length\n");
  for (i = 0; i < MAX_LENGTH; i++) {
    printf("%2d : ", i+1);
    for (j = 0; j < lengths[i]; j++)
      printf("X ");
    printf("\n");
  }
  printf("\n");

  printf("Character frequency\n");
  for (i = 0; i < NUM_LETTERS; i++) {
    printf("%c : ", 'A'+i);
    for (j = 0; j < characters[i]; j++)
      printf("X ");
    printf("\n");
  }
  printf("\n");

  // Vertical
  printf("\nVertical Histogram\n");
  printf("Word length\n\n");
  for (i = 0; i < MAX_LENGTH; i++)
    if (lengths[i] > max)
      max = lengths[i];
  for (j = max; j >= 0; j--) {
    for (i = 0; i < MAX_LENGTH; i++) {
      if (j > 0) {
	if (lengths[i] >= j)
	  printf(" X ");
	else
	  printf("   ");
      }
      else
	printf("%2d ", i+1);
    }
    printf("\n");
  }
  printf("\n");

  max = 0;
  printf("Character frequency\n\n");
  for (i = 0; i < NUM_LETTERS; i++)
    if (characters[i] > max) 
      max = characters[i];
  
  for (j = max; j >= 0; j--) {
    for (i = 0; i < NUM_LETTERS; i++) {
      if (j > 0) {
	if (characters[i] >= j)
	  printf(" X ");
	else
	  printf("   ");
      }
      else
	printf(" %c ", 'A'+i);
    }
    printf("\n");
  }
}

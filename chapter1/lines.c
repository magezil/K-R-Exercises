#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char s[], char from[]);
void despace(char s[]);

/* Exercise 1-16
   print lines of size n or greater */
int main()
{
  int len, n;
  char line[MAXLINE];
  char qualified[MAXLINE];
  char reversed[MAXLINE];

  /* Exercise 1-17 */
  n = 80;
  while ((len = mygetline(line, MAXLINE)) > 0) {
    if (len >= n) {
      despace(line);
      copy(qualified, line);
      printf("%s", qualified);
      reverse(reversed, line);
      printf("%s\n", reversed);
    }
  }
  
  return 0;
}


int mygetline(char s[], int lim)
{
  int c, i;
  int nonblank = 0;

  // Modified for Exercise 1-18
  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; i++){
    if (!(c==' ' || c=='\t'))
      nonblank = i;
    s[i] = c;
  }
  if (i > 0) {
    if (i!=(nonblank+1))
      i = nonblank+1;
    if (c==EOF)
      c='\n';
  }

  if (c=='\n'){
    s[i] = '\n';
    i++;
  }

  s[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i;

  for (i=0; ((to[i] = from[i]) != '\0'); i++);
}

/* Exercise 1-19 */
void reverse(char rev[], char from[])
{
  // Assume line is not longer than MAXLINE
  int i, count;

  for (count=0; (from[count] != '\n' && from[count] != '\0'); count++);

  for (i=0; i<count; i++)
    rev[i]=from[count-i-1];

  rev[i]='\n';
  rev[i+1]='\0';
}

/* remove extra spaces and tabs in middle of text - change to single space */
void despace(char s[])
{
  int c, i, temp;

  temp = 0;
  for (i=0; (c=s[i]) != '\0'; i++) {
    if (c==' ' || c=='\t') {
      s[temp] = ' ';
      while ((c=s[i])!=EOF && (c==' ' || c=='\t'))
	i++;

      if (c != EOF) {
	temp++;
	s[temp] = c;
	temp++;
      }
    }
    else {
      s[temp] = c;
      temp++;
    }
  }
  s[temp]='\0';
}

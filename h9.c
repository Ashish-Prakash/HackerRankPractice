#include<stdio.h>
#define MAXLEN 1000
int main()
{
  char s[MAXLEN];
  int i;
  gets(s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]== ' ')
    printf("\n");
    else
    putchar(s[i]);
  }
  return 0;
}

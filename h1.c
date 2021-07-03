#include <stdio.h>
#include<string.h>
#define MAXLIMIT 50
int main()
{
 char ch;
 char s[MAXLIMIT];
 char sem[MAXLIMIT];

 scanf("%c", &ch);
 scanf("%s",&s);
 scanf("\n");
 scanf("%[^\n]%.c",&sem);
 printf("%c\n%s\n%s",ch,s,sem);
 return 0;
}

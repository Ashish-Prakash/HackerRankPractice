#include<stdio.h>
#include<string.h>
#define N 1000
int main()
{
  char str[N];
  scanf("%s",&str);
  for(int i=48;i<=57;i++)
  {
    int new =0;
    for(int j=0;j<strlen(str);j++)
    {
      if(str[j]==i)
      new++;
    }
    printf("%d ",new);
  }
  return 0;
}
 

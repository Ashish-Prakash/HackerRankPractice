#include<stdio.h>
int fun(int *sum,int *diff, int a,int b)
{
    *sum= a + b;
    *diff= a - b;
    if(*diff<0)
    {
      *diff = *diff * (-1);
    }
    return 0;
}

int main()
{
  int a,b,sum=0,diff=0;
  scanf("%d %d",&a,&b);
  fun(&sum,&diff,a,b);
  printf("%d\n%d",sum,diff);
  return 0;
}

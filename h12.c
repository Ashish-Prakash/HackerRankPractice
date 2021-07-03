#include<stdio.h>
#define MAXLEN 100
int fun(int n, int a, int b, int c)
{
  int arr[MAXLEN], i;
  arr[1] = a;
  arr[2] = b;
  arr[3] = c;
  for(i=4;i<=n;i++)
  {
    arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
  }
  return arr[n];
}
int main()
{
  int num,a,b,c,sum=0;
  scanf("%d",&num);
  scanf("%d %d %d",&a,&b,&c);
  sum = fun(num,a,b,c);
  printf("%d",sum);
  return 0;
}

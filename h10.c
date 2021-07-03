#include<stdio.h>
#define N 1000
int main()
{
  int a[N],n;
  int i,sum =0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum=sum+a[i];
  }
  printf("%d",sum);
}

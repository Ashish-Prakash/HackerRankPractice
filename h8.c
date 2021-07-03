#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int calculate_max(int n, int k)
{
  int andmax =0, ormax =0, xormax =0;
  int and =0, or =0, xor =0;
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=i+1;j<=n;j++)
    {

    and = i & j;
    if(and<k && and>andmax)
    andmax =and;

    or = i | j;
    if(or<k && or>ormax)
    ormax =or;

    xor = i ^ j;
    if(xor<k && xor>xormax)
    xormax =xor;

  }
}
  printf("%d\n%d\n%d",andmax,ormax,xormax);
  return 0;
}

int main()
{
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  calculate_max(a,b);
  return 0;
}

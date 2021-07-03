#include<stdio.h>
int main()
{
  int l,i,j,n,m,a,b;
  scanf("%d",&n);
  l= 2*n-1;
  {
    for(i=1;i<=l;i++)
  {
    for(j=1;j<=l;j++)
    {
      a= i<=l-i ? i -1 : l-i;
      b= j<=l-j ? j -1 : l-j;
      m= a<=b ? a : b ;
      printf("%d ",n-m);
    }
    printf("\n");
  }
  return 0;
}
}

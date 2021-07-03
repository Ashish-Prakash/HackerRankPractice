#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  char* array[10] ={"zero" , "one", "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"};
  int i,a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  for(i = a; i <= b; i++)
  {

      if(i > 9)
      {
        if(i % 2 == 0)
        printf("even\n");
        else
        printf("odd\n");
      }
      else
      {
        printf("%s\n", array[i]);
      }

    }
  return 0;
}

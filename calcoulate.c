#include<stdio.h>

int main()
{
   int x[7];
   int sum = 0;
   printf("enter array elements\n");

   for(int i = 0; i < 7; i++)
   {
       scanf("%d", &x[i]);
       sum = sum + x[i];
   }

   printf("sum = %d\n", sum);

   return 0;
}

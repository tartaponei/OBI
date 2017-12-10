#include <stdio.h>
int x = 1, y = 1, n, fib;

int main()
{
   scanf("%d", &n);

   if(n <= 2) 
   {
      printf("%d", n);
   }
   else 
   {
      for (int i=3; i<=n; i++)
      {
      	fib = x+y;
      	x=y;
      	y=fib;
      }
      printf("%d\n", fib);
   }
   
      
      return 0;
   }
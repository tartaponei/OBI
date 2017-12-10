#include <stdio.h>
int n;
 
int fib(int n)                            
{                                         
   if (n <= 2) 
      return 1;   

   return fib(n - 1) + fib(n - 2);  
}                                         

int main()
{
  scanf("%d", &n);

  printf("%d", fib(n));

  return 0;
}
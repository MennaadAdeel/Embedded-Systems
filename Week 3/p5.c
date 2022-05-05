#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the number to get the Fibonacci sequence :: ");
    scanf("%d",&num);
    int fibo = Fibonacci(num);
    printf("%d",fibo);

    return 0;
}
int Fibonacci(int num)
{
   if (num <= 1)
   {
       return num;
   }
   return Fibonacci(num-1) + Fibonacci(num-2);
}

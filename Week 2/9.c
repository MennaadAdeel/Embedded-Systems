#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,result=1;
    int fact = 1;
    printf("Enter the number :: ");
    scanf("%d",&num);
    int i = 1;
    while( i<=num )
    {
        fact = fact * i;
        7i++;
    }
    printf("The factorial is :: %d ",fact);
    return 0;
}

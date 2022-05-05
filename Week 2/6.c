#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result;
    printf("Plz enter the result of 3*4 \n");
    scanf("%d",&result);
    if( result == 12 )
    {
        printf("Thanks");
    }
    else
    {
        printf("Try again");
    }
    return 0;
}

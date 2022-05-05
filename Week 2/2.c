#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ;
    printf("Please inter the number :: ");
    scanf("%d",&num);
    if ( num % 2 == 0)
    {
        printf("The number you entered is Even");
    }
    else
    {
        printf("The number you entered is Odd");
    }
	return 0;

}

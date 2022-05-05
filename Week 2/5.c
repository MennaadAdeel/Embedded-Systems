#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 , num2 , num3 ;
    printf("Enter the first number :: ");
    scanf("%d",&num1);
    printf("Enter the second number :: ");
    scanf("%d",&num2);
    printf("Enter the third number :: ");
    scanf("%d",&num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("The first number is the maximum number which is %d ",num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("The second number is the maximum number which is %d ",num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("The third number is the maximum number which is %d ",num3);
    }

	return 0;

}

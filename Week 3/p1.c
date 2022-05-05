#include <stdio.h>
#include <stdlib.h>
int Get_Max(int,int);
int main()
{
    int num1 ,num2;
    printf("Enter the first number :: ");
    scanf("%d",&num1);
    printf("Enter the second number :: ");
    scanf("%d",&num2);
    Get_Max(num1,num2);
    return 0;
}

int Get_Max(int x , int y)
{
    if ( x > y)
    {
        printf("The maximum number is %d",x);
    }
    else if (x < y)
    {
        printf("The maximum number is %d",y);
    }
    else
    {
        printf("The two number is equivalent ");
    }

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int working_h;
    float salary = 0.0;
    printf("Enter your working hours : ");
    scanf("%d", &working_h);
    if (working_h >= 40 )
    {
        salary = working_h * 50 ;
    }
    else
    {
        salary = working_h * 50 * 0.1 ;
    }
    printf("Your salary is : %0.2f $ ", salary);
    return 0;
}

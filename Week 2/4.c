#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade;
    printf("Please enter your grade in percentage :: ");
    scanf("%f",&grade);
    if ( grade >= 85 )
    {
        printf("Your rate is Excellent");
    }
    else if ( grade < 85 && grade >= 75 )
    {
        printf("You rate is very good");
    }
    else if ( grade < 75 && grade >= 66 )
    {
        printf("You rate is good");
    }
    else if ( grade < 65 && grade >= 50 )
    {
        printf("You rate is pass ");
    }
    else
    {
        printf("Fail");
    }

	return 0;

}

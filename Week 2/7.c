#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum,avr;
    float num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
    printf("Enter the 10 numbers ::\n");
    scanf("%f %f %f %f %f %f %f %f %f %f",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10);
    sum = num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
    avr = (num1+num2+num3+num4+num5+num6+num7+num8+num9+num10)/10;
    printf("The summation is :: %0.2f\n",sum);
    printf("The average is :: %0.2f",avr);
    return 0;
}

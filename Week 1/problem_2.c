#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amount;
    printf("Enter the amount with cents :: ");
    scanf("%f",&amount);
    amount = amount + amount * 0.05;
    printf("The amount with tax added is :: %f",amount);

    return 0;
}

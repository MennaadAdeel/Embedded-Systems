#include <stdio.h>
#include <stdlib.h>

int add(int *p , int *q)
{
    int sum = *p + *q;
    return sum;

}

int main()
{
    int val1,val2;
    printf("Enter the first value :: ");
    scanf("%d",&val1);
    printf("Enter the second value :: ");
    scanf("%d",&val2);
    printf("The summation is %d",add(&val1 , &val2));

    return 0;
}

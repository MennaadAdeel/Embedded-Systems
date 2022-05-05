#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, count;
    printf("Enter the number :: ");
    scanf("%d",&num);
    while(num != 0)
    {
        num = num / 10;
        count ++;
    }
    printf("Number of digits is %d ",count);
    return 0;
}

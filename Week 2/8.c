#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int mul =1;
    printf("Enter the number :: ");
    scanf("%d",&num);
    for(int i=1; i<=10; i++)
    {
        mul = num * i;
        printf("%d * %d = %d\n",num,i,mul);
    }
    return 0;
}

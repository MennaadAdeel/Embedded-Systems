#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , bit_num;
    printf("Enter the number :: ");
    scanf("%d",&num);
    printf("Enter the number of bit to make change ");
    scanf("%d",&bit_num);
    int sit_bit = num | ( 1 << bit_num );
    printf("sit bit number %d of %d is %d \n",bit_num,num,sit_bit);
    int get_bit = (num & ( 1 << bit_num )) >> bit_num;
    printf("Get bit number %d of %d is %d ",bit_num,num,get_bit);



    return 0;
}

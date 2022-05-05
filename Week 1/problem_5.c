#include <stdio.h>
#include <stdlib.h>
int nums[3];

int main()
{
    printf("Enter the three numbers :\n");
    for(int i =0; i < 3; i++)
    {
        scanf("%d",&nums[i]);
    }
     for(int i =0; i < 3; i++)
    {
        printf("You entered : %d\n",nums[i]);
    }
    printf("The reversed order will be..\n");
    for(int i = 2; i >= 0; i--)
    {
        printf("%d\n",nums[i]);
    }
    return 0;
}

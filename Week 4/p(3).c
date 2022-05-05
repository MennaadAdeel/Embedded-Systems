#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[7];
    int i,j;
    printf("Enter the 7 elements\n");
    for( i = 0; i<7; i++)
    {
        scanf("%d",&arr[i]);
    }


    for(i = 0; i<7; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
    for(i=0; i<7; i++)
    {
        for(j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}

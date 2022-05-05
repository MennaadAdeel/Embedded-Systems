#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    int sort;
    printf("enter the 5 elements\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<0; j++)
        {
            if(arr[i]>arr[j])
            {
                sort=arr[i];
                arr[i]=arr[j];
                arr[j]= sort;
            }
        }
    }
    printf("\nThe second largest element is :: %d",arr[2]);
    return 0;
}

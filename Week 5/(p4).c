#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int a[])
{
    int i,swap,*p;
    l1:
    for(i=0; i<7; i++)
    {
        if(a[i+1] > a[i])
        {
            swap = a[i];
            a[i] = a[i+1];
            a[i+1] = swap;
            goto l1;
        }
    }
    printf("\nThe sorted array is :: ");
    for(p=a+6;p>=a;p--)
        printf("%d ",*p);
}

int main()
{
    int arr[7];
    printf("Enter the 7 elements ::\n");
    for(int i=0; i<7; i++)
        scanf("%d",&arr[i]);

    printf("you entered :: ");
    for(int i=0; i<7; i++)
        printf("%d ",arr[i]);

    bubble_sort(arr);

    return 0;
}

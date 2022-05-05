#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h;
    printf("Enter the height of the pyramid :: ");
    scanf("%d",&h);
    for (int i = 0; i < h; i++)
    {
        for(int j =0; j < 2*h -1; j++)
        {
            if(j>= h-(i-1) && j <= h+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

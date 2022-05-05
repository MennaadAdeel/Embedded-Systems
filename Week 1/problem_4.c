#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 7 , y = 4;
    printf("X = 7\nY = 4\n");
    printf("X | Y = %d\n" , x|y);
    printf("X & Y = %d\n" , x&y);
    printf("X ^ Y = %d\n" , x^y);
    printf("X << Y = %d\n" , x<<y);
    printf("X >> Y = %d" , x>>y);

    return 0;
}

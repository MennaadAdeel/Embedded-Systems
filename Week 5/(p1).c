#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    printf("%d ",x);
    int *p = &x;
    *p = 20;
    printf("%d ",x);
    return 0;
}

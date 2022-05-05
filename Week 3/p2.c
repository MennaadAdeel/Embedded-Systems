#include <stdio.h>
#include <stdlib.h>
int x = 7;
int y = 21;
int Swap(int,int);
int main()
{
    printf(" x = %d\n y = %d\n",x,y);
    Swap(x,y);

    return 0;
}
int Swap(int x ,int y)
{
    int z;
    z = x;
    x = y;
    y = z;
    printf(" x = %d\n y = %d",x,y);

}

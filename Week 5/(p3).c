#include <stdio.h>
#include <stdlib.h>

int Scalar_Mul(int a[] , int b[])
{
    int i ,sum=0;
    for(i=0; i<5; i++)
    {
        sum = sum + (a[i] * b[i]);
    }
    return sum;
}

int main()
{
    int a[5]={1,2,3,4,5} , b[5]={11,22,33,44,55};
        printf("%d ",Scalar_Mul(a,b));

    return 0;
}

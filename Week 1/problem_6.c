#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y;
    printf("Enter the two numbers :: \n");
    scanf("%d %d",&x,&y);
    printf("-----------------------------\n");
    printf("The Arithmetical operations\n");
    printf("%d + %d = %d\n",x , y , x+y);
    printf("%d - %d = %d\n",x , y , x-y);
    printf("%d * %d = %d\n",x , y , x*y);
    printf("%d / %d = %d\n",x , y , x/y);
    printf("%d %% %d = %d\n",x , y , x%y);
    printf("-----------------------------\n");
    printf("The Logical operations\n");
    printf("%d && %d = %d\n",x , y , x&&y);
    printf("%d || %d = %d\n",x , y , x||y);
    printf("!( %d == %d) --> %d\n",x,y,!(x==y));
    printf("-----------------------------\n");
    printf("The Bitwise operations\n");
    printf("%d & %d = %d\n",x , y , x&y);
    printf("%d | %d = %d\n",x , y , x|y);
    printf("%d ^ %d = %d\n",x , y , x^y);
    printf("%d >> %d = %d\n",x , y , x>>y);
    printf("%d << %d = %d\n",x , y , x<<y);
    printf("~%d = %d\n",x ,~x);
    printf("~%d = %d\n",y ,~y);
    printf("-----------------------------");






    return 0;
}

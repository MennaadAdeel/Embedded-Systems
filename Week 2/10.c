#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID = 7721721;
    int password = 122928;
    int id ,pass;
    label:
    printf("please enter your ID :: ");
    scanf("%d",&id);
    if ( id == ID )
    {
        printf("Enter your password :: ");
        scanf("%d",&pass);
        if (pass == password)
        {
            printf("WELCOME");
        }
        //first incorrect password
        else
        {
            int pass1;
            printf("You are not registered\n");
            printf("Enter your password again :: ");
            scanf("%d",&pass1);
            if (pass1 == password)
            {
                printf("WELCOME");
            }
            //second incorrect password
            else
            {
                int pass2;
                printf("You are not registered\n");
                printf("Enter your password again :: ");
                scanf("%d",&pass2);
                if (pass2 == password)
                {
                    printf("WELCOME");
                }
                //third incorrect password
                else
                {
                    int pass3;
                    printf("You are not registered\n");
                    printf("Enter your password again :: ");
                    scanf("%d",&pass3);
                    if (pass3 == password)
                    {
                        printf("WELCOME");
                    }
                    else
                    {
                        printf("No more tries");
                    }
                }
            }
        }
    }
    else
    {
        printf("Id is not correct\n");
        goto label;
    }
    return 0;
}

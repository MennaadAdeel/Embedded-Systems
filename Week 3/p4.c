#include <stdio.h>
#include <stdlib.h>
char user[20] , pass[20];
int main()
{
    printf("Enter the UserName :: ");
    scanf("%s",&user);
    printf("Enter the Password :: ");
    scanf("%s",&pass);
    login(user, pass);
    return 0;
}

void login(char user[20] , char pass[20])
{
    int result1 = strcmp(user , "MennaAdel");
    int result2 = strcmp(pass , "122928");
    if(result1 == 0 )
    {
        if(result2 == 0)
        {
          printf("success");
        }
    }
    else if (result1==1)
    {
        if(result2== 0)
        {
          printf("Wrong user name..Try again");
        }

    }
    else if (result1== 0)
    {
        if(result2== 1)
        {
           printf("Wrong Password..Try again");
        }

    }
    else
    {
        printf("login failed");

    }
}


#include <stdio.h>
#include <stdlib.h>

typedef struct employees
{
    int salary;
    int bonus;
    float deductions;
}Employee;

float print(Employee M)
{
    float total = (M.salary * M.deductions) + M.bonus ;
    return total;
}

int main()
{
    Employee Mohsen,Maged,Mariam;
    printf("Enter the salary, the bonus and the deductions for the first employee ::\n");
    scanf("%d%d%f",&Mohsen.salary,&Mohsen.bonus,&Mohsen.deductions);
    printf("-----------------------------------------\n");
    printf("Enter the salary, the bonus and the deductions for the second employee ::\n");
    scanf("%d%d%f",&Maged.salary,&Maged.bonus,&Maged.deductions);
    printf("-----------------------------------------\n");
    printf("Enter the salary, the bonus and the deductions for the third employee ::\n");
    scanf("%d%d%f",&Mariam.salary,&Mariam.bonus,&Mariam.deductions);
    printf("-----------------------------------------\n");
    printf("The Total values of Mohsen is %f $\n",print(Mohsen));
    printf("The Total values of Maged is %f $\n",print(Maged));
    printf("The Total values of Mariam is %f $",print(Mariam));




    return 0;
}

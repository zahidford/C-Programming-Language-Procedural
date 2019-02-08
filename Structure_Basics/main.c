#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct employee_salary
    {
    char name[30];
    char hireDate[15];
    float salary;
    };

    struct employee_salary entry;

    printf ("Enter name \n");
    scanf ("%s",entry.name);
    printf ("Enter Date \n");
    scanf ("%s",entry.hireDate);
    printf ("Enter Salary \n");
    scanf ("%f",&entry.salary);

    printf ("You entered \n name %s\n and Date is %s \n Salary is %f",entry.name,entry.hireDate,entry.salary);


    return 0;
}

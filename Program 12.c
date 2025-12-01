/******************************************************************************

Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00

*******************************************************************************/
#include <stdio.h>  //Program 12

int main()
{
    int id,hrs;
    double salary;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%d",&id);
    printf("Input the working hrs: ");
    scanf("%d",&hrs);
    printf("Salary amount/hr: ");
    scanf("%lf",&salary);
    
    printf("\nEmployees ID: %d",id);
    printf("\nSalary: %0.2lf",salary*hrs);
    return 0;
}

/******************************************************************************

Write a program that reads two numbers and divides the first number by the second number. If division is not possible print "Division is not possible".
Test Data :
Input two numbers:
x: 25
y: 5
Expected Output: 5.0
*******************************************************************************/
#include <stdio.h>      //Program 38

int main()
{
    int x,y;
    double division;
    printf("Input two numbers: \n");
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    
    if(y!=0)
    {
        division = x/y;
        printf("Expected Output: %0.2lf",division);
    }
    else
        printf("Check the divisor");

    return 0;
}

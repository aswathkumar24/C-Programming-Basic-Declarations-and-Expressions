/******************************************************************************

Write a C program that reads two integers and checks whether they are multiplied or not.
Test Data :
Input the first number: 5
Input the second number: 15
Expected Output:
Multiplied!

*******************************************************************************/
#include <stdio.h>      //Program 24

int main()
{
    int a,b;
    printf("Input the first number: ");
    scanf("%d",&a);
    printf("Input the second number: ");
    scanf("%d",&b);
    if(a<b)
    {
        a = a+b;
        b = a-b;
        a = a-b;
    }
    if(a%b==0)
    {
        printf("Multiplied");
    }
    else
    {
        printf("Not Multiplied");
    }
    return 0;
}

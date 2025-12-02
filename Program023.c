/******************************************************************************

Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them.
Determine the perimeter of the triangle if the given values are valid.
Test Data :
Input the first number: 25
Input the second number: 15
Input the third number: 35
Expected Output:
Perimeter = 75.0

*******************************************************************************/
#include <stdio.h>      //Program 23

int main()
{
    double a[3],perimeter;
    for(int i=0;i<3;i++)
    {
        printf("Input the %d number: ",i+1);
        scanf("%lf",&a[i]);
    }
    for(int i=0;i<3;i++)
    {
        perimeter = perimeter+a[i];
    }
    if((a[0]+a[1]>a[2])&&(a[1]+a[2]>a[0])&&(a[0]+a[2]>a[1]))
    {
        printf("Perimeter: %0.1lf",perimeter);
    }
    else
    {
        return 0;
    }
    
    return 0;
}

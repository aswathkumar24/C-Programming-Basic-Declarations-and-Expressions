/******************************************************************************

Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers.
Display a message if it is not possible to find the roots.
Test Data :
Input the first number(a): 25
Input the second number(b): 35
Input the third number(c): 12
Expected Output:
Root1 = -0.60000
Root2 = -0.80000

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,root1,root2,h,y;
    printf("Input the first number(a): ");
    scanf("%lf",&a);
    printf("Input the second number(b): ");
    scanf("%lf",&b);
    printf("Input the third number(c): ");
    scanf("%lf",&c);
    
    h = (b*b)-(4*a*c);
    
    if(h>0&&a!=0)
    {
        y = sqrt(h);
        root1 = (-b + y)/(2*a);
        root2 = (-b - y)/(2*a);
        printf("Root1: %f\nRoot2: %f",root1,root2);
    }
    else
    {
        printf("Not roots can be found");
    }
}

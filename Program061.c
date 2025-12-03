/******************************************************************************

Write a C program that accepts a real number x and prints out the
corresponding value of sin(1/x) using 4-decimal places.
Input value of x: .6235
Value of sin(1/x) is 0.9995

*******************************************************************************/
#include <stdio.h>      //Program 61
#include <math.h>

int main()
{
    double x;
    printf("Input value of x: ");
    scanf("%lf",&x);
    printf("Value of sin(1/%lf): %0.4lf",x,sin(1/x));

    return 0;
}

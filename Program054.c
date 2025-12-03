/******************************************************************************

Write a C program that accepts a distance in centimeters and prints the corresponding value in inches.
Test Data:
Input Data: 500cms
Input the distance in cm:
Distance of 500.00 cms is = 196.85 inches

*******************************************************************************/
#include <stdio.h>      //Program 54
float conversion(float a)
{
    return (a/2.54);
}

int main()
{
    float i,c; 
    printf("Input the distance in cm: ");
    scanf("%f",&c);
   
    i = conversion(c);
    printf("Distance of %0.2f cms : %0.2f inches ",c,i);
    return 0;
}

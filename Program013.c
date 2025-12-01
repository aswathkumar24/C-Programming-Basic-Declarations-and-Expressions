/******************************************************************************

Write a C program that accepts three integers and finds the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35

*******************************************************************************/
#include <stdio.h>  //Program 13

int main()
{
    int a,b,c,max;
    printf("Input the first integer: ");
    scanf("%d",&a);
    printf("Input the second integer: ");
    scanf("%d",&b);
    printf("Input the third integer: ");
    scanf("%d",&c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c); 
    printf("Maximum value of three integers: %d",max);
}

/******************************************************************************

Write a C program that accepts two integers from the user and calculates the product of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 15
Expected Output:
Product of the above two integers = 375

*******************************************************************************/
#include <stdio.h>  //Program 10

int main()
{
    int a,b;
    printf("Input the first integer: ");
    scanf("%d",&a);
    printf("Input the second integer: ");
    scanf("%d",&b);
    
    printf("Product of the above two integers: %d",a*b);

    return 0;
}

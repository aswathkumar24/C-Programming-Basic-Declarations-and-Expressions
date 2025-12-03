/******************************************************************************

Write a C program that accepts a positive integer less than 500 and prints out 
the sum of the digits of this number.
Input a positive number less than 500:
Sum of the digits of 347 is 14

*******************************************************************************/
#include <stdio.h>      //Program 62

int main()
{
    int a,b,c=0,d;
    printf("Input a positive number less than 500: ");
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        b = a%10;
        a = a/10;
        c = c+b;
    }
    
    printf("Sum of the digits of %d is %d",d,c);
    return 0;
}

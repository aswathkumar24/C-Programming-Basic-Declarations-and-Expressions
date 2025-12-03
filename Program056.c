/******************************************************************************

Left-shift an integer by two bits

Write a C program to shift given data by two bits to the left.
Input value : 2
Read the integer from keyboard-
Integer value = 2
The left shifted data is = 8

*******************************************************************************/
#include <stdio.h>      //Program 56

void shift(int a)
{
    printf("The left shifted data i: %d",a<<2);
}
    


int main()
{
    int a;
    printf("Input value : ");
    scanf("%d",&a);
    shift(a);

    return 0;
}

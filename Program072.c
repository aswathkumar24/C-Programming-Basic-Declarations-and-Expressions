/******************************************************************************

Remove a negative sign from a number

Write a C program to remove any negative sign in front of a number.
Input a value (negative):
Original value = -253
Absolute value = 253
*******************************************************************************/
#include <stdio.h>      //Program 72
#include <stdlib.h>

int main()
{
    int a;
    printf("Input a value (negative): ");
    scanf("%d",&a);
    printf("Original value: %d\n",a);
    printf("Absolute value: %d\n",abs(a));
    if(a<0)
    {
        a = -(a);
    }
    printf("Absolute value: %d\n",a);
    return 0;
}
